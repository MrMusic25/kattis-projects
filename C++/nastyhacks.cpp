#include <iostream>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	if (n < 0 || n > 100) return 1;
	
	int r, e, c;
	int data[n][3]; // For each n, second data is r, e, and c
	for (int i = 0; i < n; i++) {
		cin >> r >> e >> c;
		if ( (r < -10000000 ||
		      e > 10000000 ||
			  c < 0 || c > 10000000) ) return 1;
		// If it makes it this far, values passed
		data[i][0] = r;
		data[i][1] = e;
		data[i][2] = c;
	}
	
	for (int j = 0; j < n; j++) {
		if (data[j][1]-data[j][2] > data[j][0]) cout << "advertise" << endl;
		else if (data[j][1]-data[j][2] == data[j][0]) cout << "does not matter" << endl;
		else cout << "do not advertise" << endl;
	}
	
	return 0;
}