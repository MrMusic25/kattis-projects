#include <iostream>
using namespace std;

int main() {
	int monthlyAllowance, numMonths;
	cin >> monthlyAllowance;
	if (monthlyAllowance < 1 || monthlyAllowance > 100) return 1;
	cin >> numMonths;
	if (monthlyAllowance < 1 || monthlyAllowance > 100) return 1;
	
	int monthlyUsage[numMonths], leftover = monthlyAllowance * numMonths;
	for (int i = 0; i < numMonths; i++) {
		cin >> monthlyUsage[i];
		if (monthlyUsage[i] < 0 || monthlyUsage[i] > 10000) return 1;
		leftover -= monthlyUsage[i];
	}
	
	cout << leftover + monthlyAllowance << endl;
	return 0;
}