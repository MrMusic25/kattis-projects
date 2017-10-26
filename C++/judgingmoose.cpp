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

int greatest(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}

int main() {
	int l, r;
	cin >> l >> r;
	if (!(withinBounds(0,20,l,'e') && withinBounds(0,20,r,'e'))) return 1;
	
	if (l == 0 && r == 0)
		cout << "Not a moose" << endl;
	else if (l == r)
		cout << "Even " << l + r << endl;
	else
		cout << "Odd " << 2 * greatest(l,r) << endl;
	
	return 0;
}