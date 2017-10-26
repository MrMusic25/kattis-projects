#include <iostream>
#include <string>
#include <iomanip>

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
	double c;
	int l;
	cin >> c >> l;      // 8 precesion, according to website
	if (!(withinBounds((double)0.00000001,(double)100.0,c,'e') && withinBounds(1,100,l,'e'))) return 1;
	
	double input[2], results;
	for (int i = 0; i < l; i++) {
		cin >> input[0] >> input[1];
		//if (!(withinBounds((double)0.0,(double)100.0,input[0],'e') && withinBounds((double)0.0,(double)100.0,input[1],'e'))) return 1;
		results += (input[0] * input[1]) * c;
	}
	
	cout << fixed << setprecision(6) << results << endl;
	
	return 0;
}