#include <iostream>
#include <locale>
using namespace std;

int main() {
	string input;
	int flipbit = 0;
	cin >> input;
	if (input.length() > 100) return 1;
	
	for (int i = 0; i < input.length(); i++) {
		if (flipbit == 0) {
			if (isupper(input[i])) {
				cout << input[i];
				flipbit = 1;
			}
			else return 1;
		}
		else if (input[i] == '-' && isupper(input[i+1])) cout << input[i+1];
		else if (!isalpha(input[i])) return 1;
		// else continue
	}
	cout << endl;
	return 0;
}