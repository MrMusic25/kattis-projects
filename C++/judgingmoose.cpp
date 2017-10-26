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

int main() {
	
	
	return 0;
}