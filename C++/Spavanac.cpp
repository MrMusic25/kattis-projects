#include <iostream>
using namespace std;

int main() {
	int hours, minutes;
	cin >> hours >> minutes;
	if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59) return 1;
	
	if (minutes < 45) {
		hours--;
		if (hours < 0) hours += 24;
		minutes += 60;
	}
	
	cout << hours << " " << minutes - 45 << endl;
	return 0;
}