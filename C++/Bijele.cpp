#include <iostream>
using namespace std;
//enum Piece { Pawn, Knight, Bishop, Rook, Queen, King };

int main() {
	int pieces[6];
	for (int i = 0; i < 6; i++) {
		cin >> pieces[i];
		if (pieces[i] < 0 || pieces[0] > 10) return 1;
		switch(i) {
			case 0:
			case 1:
				cout << 1 - pieces[i] << " ";
				break;
			case 2:
			case 3:
			case 4:
				cout << 2 - pieces[i] << " ";
				break;
			case 5:
				cout << 8 - pieces[i] << endl;
		}
	}
	return 0;
}	