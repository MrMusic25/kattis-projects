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
	int x, y, n;
	cin >> x >> y >> n;
	if (!(x >= 1 && y > x && n >= y && n <= 100)) return 1;
	
	for (int i = 1; i <= n; i++) {
		if (i % x == 0 && i % y == 0)
			cout << "FizzBuzz" << endl;
		else if (i % x == 0)
			cout << "Fizz" << endl;
		else if (i % y == 0)
			cout << "Buzz" << endl;
		else
			cout << i << endl;
	}
	
	return 0;
}