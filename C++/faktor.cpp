#include <iostream>

using namespace std;

int main() {
	int articles, impact;
	cin >> articles >> impact;
	if (articles < 1 || articles > 100 || impact < 1 || impact > 100) return 1;
	
	cout << ((articles * impact) - articles) + 1 << endl;
	return 0;
}