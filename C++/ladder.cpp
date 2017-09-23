#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int h, v;
	cin >> h >> v;
	if (h < 1 || h > 10000 || v < 1 || v > 89) return 1;
	
	double length = 999999.9, temp;
	// cos(v) = h/l
	// h = l * cos(v)
	// l = h / cos(v)
	for (int i = 0; i < v; i++) {
		temp = ((double)(h)) / sin((double)(((i+1)*M_PI)/180));
		temp = ceil(temp);
		if (temp < length) length = temp;
	}

	cout << (int)(length) << endl;
	return 0;
}