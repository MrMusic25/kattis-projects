#include <iostream>
using namespace std;

int main() {
	int num, i = 1;
	cin >> num;
	if (num < 1 || num > 100) return 1;
	
	while (i <= num) {
		cout << i << " Abracadabra" << endl;
		i++;
	}
	return 0;
}