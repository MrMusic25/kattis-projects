#include <iostream>
using namespace std;

int main() {
	int turns;
	cin >> turns;
	if (turns < 1 || turns > 10000000) return 1;
	
	string winner = "Alice";
	while (turns > 1) {
		turns -= 2;
		if (turns%2 == 0) winner = "Bob";
		else winner = "Alice";
	}
	cout << winner << endl;
	return 0;
}