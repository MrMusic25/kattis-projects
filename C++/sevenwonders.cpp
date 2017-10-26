#include <iostream>

using namespace std;

int main() {
	string input;
	getline(cin,input);
	if (input.length() > 50) return 1;
	
	int t = 0, c = 0, g = 0;
	for (int i = 0; i < input.length(); i++) {
		switch(tolower(input[i])) {
			case 'g':
				g++;
				break;
			case 'c':
				c++;
				break;
			case 't':
				t++;
				break;
			default:
				return 1; // Bad input checking
		}
	}
	
	int total = (t*t) + (g*g) + (c*c);
	while (g > 0 && t > 0 && c > 0) {
		total += 7;
		g--;
		t--;
		c--;
	}
	
	cout << total << endl;
	return 0;
}