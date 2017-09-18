#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int num, sum = 0;
	cin >> num;
	if (num < 1 || num > 10) return 1;
	
	int list[num];
	for (int i = 0; i < num; i++) {
		cin >> list[i];
		sum += pow((int)list[i]/10,(int)list[i]%10);
	}
	cout << sum << endl;
	return 0;
}	