#include <iostream>
#include <string>

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

bool withinBounds(double min, double max, double value, char type) {
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
	int n, m;
	cin >> m >> n;
	if (!(withinBounds(0,1000,n,'e') && withinBounds(0,1000,m,'e') && ((n == 0 && m == 0) || n != m))) return 1; // logic, lol
	
	if (n - m < 0) {
		cout << "Dr. Chaz needs " << m - n << " more piece";
		if (m - n == 1)
			cout << " of chicken!" << endl;
		else
			cout << "s of chicken!" << endl;
	}
	else if (n - m == 1)
		cout << "Dr. Chaz will have 1 piece of chicken left over!" << endl;
	else
		cout << "Dr. Chaz will have " << n - m << " pieces of chicken left over!" << endl;
	
	return 0;
}