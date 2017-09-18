#include <iostream>
using namespace std;

void swapElements(char cups[], char move);

int main() {
	char cups[] = { 'x', 'e', 'e'};
	string input;
	cin >> input;
	
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == 'a' || input[i] == 'A' || 
			input[i] == 'b' || input[i] == 'B' ||
		    input[i] == 'c' || input[i] == 'C') swapElements(cups,input[i]);
		else return 1;
		if (i == 49) break;
	}
	
	for (int j = 0; j < 3; j++) {
		if (cups[j] == 'x') {
			cout << j + 1 << endl;
			return 0;
		}
	}
	return 1;
}

void swapElements(char cups[], char move) {
	char temp;
	switch(move) {
		case 'a':
		case 'A':
			temp = cups[0];
			cups[0] = cups[1];
			cups[1] = temp;
			break;
		case 'b':
		case 'B':
			temp = cups[2];
			cups[2] = cups[1];
			cups[1] = temp;
			break;
		case 'c':
		case 'C':
			temp = cups[0];
			cups[0] = cups[2];
			cups[2] = temp;
			break;
		default:
			return;
	}
}