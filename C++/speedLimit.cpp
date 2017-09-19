#include <iostream>
using namespace std;

int arraySum (int array[10]) {
	int sum = 0;
	for (int i = 0; i < 10; i++) sum += array[i];
	return sum;
}

int main() {
	int totalDistance, num, s, t[10];
	
	cin >> num;
	while (num != -1) {
		if (num < 1 || num > 10) return 1;
		totalDistance = 0;
		for (int j = 0; j < 10; j++) {
			t[j] = 0;
		}
		
		for (int i = 0; i < num; i++) {
			s = 0;
			cin >> s >> t[i];
			if (s < 1 || s > 90 || t[i] < 1 || t[i] > 12) return 1;
			if (i == 0) totalDistance += s * t[i];
			else totalDistance += s * (t[i] - t[i-1]);
		}
		cout << totalDistance << " miles" << endl;
		
		cin >> num;
	}
	return 0;
}