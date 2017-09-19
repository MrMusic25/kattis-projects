#include <iostream>
#include <cmath>
using namespace std;

// EVERYTHING IS FIFO

void i2b(int num, int rep/*resentation*/[]) {
	int n = num, size = ((int)sizeof(rep)/sizeof(rep[0]));
	for (int i = 0, j = size; i < size; i++, j--) {
		if (n > pow(2,j) - 1) {
			n -= pow(2,j) - 1;
			rep[i] = 1;
		}
	}
}

void reverseArray(int rep[]) {
	int temp = -1, size = ((int)sizeof(rep)/sizeof(rep[0]));
	for (int i = 0, j = size - 1; i != ((int)(size/2) - 1); i++, j--) {
		temp = rep[i];
		rep[i] = rep[j];
		rep[j] = temp;		
	}
}

int b2i(int rep[]) {
	int sum = 0, size = ((int)sizeof(rep)/sizeof(rep[0]));
	for (int i = 0, j = size - 1; i < size; i++, j--) {
		if (rep[i] == 1) sum += pow(2,j);
	}
	return sum;
}

int nsum(int n) {
	if (n == 0) return 1;
	return pow(2,n) + nsum(n-1);
}

void outputArray(int rep[]) {
	int size = ((int)sizeof(rep)/sizeof(rep[0]));
	cout << "Binary=";
	for (int i = 0; i < size; i++) cout << rep[i];
	cout << endl;
}

int main() {
	int input, output;
	cin >> input;
	if (input < 1 || input > 1000000000) return 1;
	//input--;
	
	int i = -1;
	do {
		i++;
		cout << "nsum(" << i << ")=" << nsum(i) << endl;
	} while(nsum(i) <= input);
	int binary[i];
	for (int j = 0; j < i; j++) binary[j] = 0;
	
	i2b(input,binary);
	outputArray(binary);
	reverseArray(binary);
	outputArray(binary);
	cout << b2i(binary) << endl;
	return 0;
}