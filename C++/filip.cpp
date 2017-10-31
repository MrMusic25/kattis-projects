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

void reverse(string &input) {
	for (int i = 0; i < input.length(); i++)
		swap(input[i],input[input.length()-i-1]);
}

int main() {
	string values[2];
	cin >> values[0] >> values[1];
	if (values[0] == values[1]) return 1;
	
	int counter = 0;
	while (counter < 2)
		for (int i = 0; i < values[counter].length(); i++)
			if (values[counter][i] == '0')
				return 1;
	
	reverse(values[0]);
	reverse(values[1]);
	if (stoi(values[0],nullptr,10) > stoi(values[1],nullptr,10))
		cout << values[0] << endl;
	else
		cout << values[1] << endl;
	
	return 0;
}