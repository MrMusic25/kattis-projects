#include <iostream>
using namespace std;

int main() {
	int x, y, flag = 0;
	cin >> x >> y;
	if (x < -1000 || x == 0 || x > 1000 ||
	    y < -1000 || y == 0 || y > 1000) return 1;
	   
	int xq[2], yq[2];
	if (x < 0) {xq[0] = 2; xq[1] = 3;}
	else {xq[0] = 1; xq[1] = 4;}
	if (y < 0) {yq[0] = 3; yq[1] = 4;}
	else {yq[0] = 1; yq[1] = 2;}
	
	if (xq[0] == yq[0] || xq[0] == yq[1]) cout << xq[0] << endl;
	else cout << xq[1] << endl;
	return 0;
}