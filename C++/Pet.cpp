#include <iostream>
using namespace std;

bool isArrayValid(int scores[5][4]) {
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 4; j++)
			if (scores[i][j] == -1)
				return false;
	return true;
}

int sumRow(int scores[5][4], int row) {
	int sum = 0;
	for (int i = 0; i < 4; i++)
		sum += scores[row][i];
	return sum;
}

int winningRow(int scores[5][4]) {
	int winner = -1, highSum = -1;
	for (int i = 0; i < 5; i++)
		if (sumRow(scores,i) > highSum) {
			winner = i;
			highSum = sumRow(scores,i);
		}
	return winner;
}

void printWinner(int scores[5][4]) {
	int winner = winningRow(scores);
	cout << winner << " " << sumRow(scores,winner) << endl;
}

int main() {
	int scores[5][4];
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 4; j++)
			scores[i][j] = -1;
		
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 4; j++)
			cin >> scores[i][j];
		
	if (!isArrayValid(scores)) return 1;
	
	printWinner(scores);
}