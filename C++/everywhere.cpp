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

bool isUnique(string cities[], int element) { 
	for (int i = 0; i < element; i++)
		if (cities[element] == cities[i])
			return false;
	return true;
}

int main() {
	int t, n;
	string cities[100];
	int i, j, k;
	cin >> t;
	if (!withinBounds(0,50,t,'e')) return 1;
	
	int uniqueCities[t];
	for (i = 0; i < t; i++) uniqueCities[i] = 0;
	
	for (i = 0; i < t; i++) {
		cin >> n;
		//cities = new string[n];
		for (j = 0; j < n; j++) {
			cin >> cities[j];
			for (k = 0; k < cities[j].length(); k++) cities[j][k] = tolower(cities[j][k]);
			if (isUnique(cities,j)) uniqueCities[i]++;
		}
	}
	
	for (i = 0; i < t; i ++)
		cout << uniqueCities[i] << endl;
	
	return 0;
}