#include <iostream>
#include <string>

using namespace std;

int main() {
	string input = "";
	getline(cin,input);
	
	int letters, max = input.length();
	if (max > 250 || max < 1) return 1;
	for (int j = 0; j < max; j++) input[j] = tolower(input[j]);
	
	char temp;
	for (int i = 0; i < max; i++) {
		letters = 0;
		if (!(i >= max - 1)) {
			while (input[i + letters + 1] == input[i])
				letters++; // Returns value from start end (e.g ooo returns 2)
			if (letters >= 1) {
				temp = input[i];
				input.erase(i,letters);
				max -= letters;
			}
		}
	}
	cout << input << endl;
	return 0;
}