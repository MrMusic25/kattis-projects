#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	if (num < 1 || num > 20) return 1;
	
	int nums[num];
	for (int i = 0; i < num; i++) {
		cin >> nums[i];
		if (nums[i] < -10 || nums[i] > 10) return 1;
		if (nums[i]%2 == 0)
			cout << nums[i] << " is even" << endl;
		else
			cout << nums[i] << " is odd" << endl;
	}
	return 0;
}