#include <iostream>
using namespace std;

int main() {
	int num = 0, count = 0;
	cin >> num;
	if (num < 1 || num > 100) return 1;
	
	int tempList[num];
	for (int i = 0; i < num; i++) {
		cin >> tempList[i];
		if (tempList[i] < -1000000 || tempList[i] > 1000000) return 1;
		if (tempList[i] < 0) count++;
	}
	
	cout << count << endl;
	return 0;
}