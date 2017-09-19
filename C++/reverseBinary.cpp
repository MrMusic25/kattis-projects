#include <iostream>
using namespace std;

// EVERYTHING IS FIFO
int pow(int x, int y) {
	if (y == 0) return 1;
	return x * pow(x,y-1);
}

void i2b (int rep[], int num, int size) {
	int /*size = (int)(sizeof(rep[])/sizeof(rep[0])),*/ pwr = 0, original = num;
	//cout << "Size=" << size << endl;
	for (int i = 0, j = size - 1; i < size; i++, j--) {
		pwr = pow(2,j);
		if (original >= pwr) {
			original -= pwr;
			rep[i] = 1;
		}
	}
}

int b2i (int rep[], int size) {
	int /*size = (int)(sizeof(rep)/sizeof(rep[0])),*/ sum = 0;
	for (int i = 0, j = size - 1; i < size; i++, j--) {
		if (rep[i] == 1) sum += pow(2,j);
	}
	return sum;
}

void revArray(int rep[], int size) {
	int /*size = (int)(sizeof(rep)/sizeof(rep[0])),*/ i, temp;
	if (size%2 == 0)
		i = (int)(size/2);
	else
		i = (int)((size-1)/2);
	
	for (int j = 0, k = size - 1; j < i; j++, k--) {
		temp = rep[j];
		rep[j] = rep[k];
		rep[k] = temp;
	}
}

int main() {
	int input;
	cin >> input;
	if (input < 1 || input > 1000000000) return 1;
	
	int size = 0;
	while (pow(2,size) < input) size++;
	//size++;
	int binary[size];
	for (int i = 0; i <= size; i++) binary[i] = 0;
	
	i2b(binary, input, size);
	revArray(binary, size);
	
	cout << b2i(binary,size) << endl;
	return 0;
}