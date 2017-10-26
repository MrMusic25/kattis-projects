#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool withinBounds(int min, int max, int value, char type) {
	switch (type) {
		case 'e': // allowed to equal limit
			if (value < min || value > max)
				return false;
			else
				return true;
			break;
		default: // within limits, not equal to
			if (value <= min || value >= max)
				return false;
			else
				return true;
	}
}

bool withinBounds(string value, int max, char type) {
	switch (type) {
		case 'e':
			if (value.length() > max)
				return false;
			else
				return true;
		default:
			if (value.length() >= max)
				return false;
			else
				return true;
	}
}

int main() {
	int n;
	cin >> n;
	if (!withinBounds(1,15,n,'e')) return 1;
	
	int total = pow(2,n) + 1;
	cout << total * total << endl;
	
	return 0;
}