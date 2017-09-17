#include <iostream>
using namespace std;

int main() {
  int r1, s;
  cin >> r1 >> s;

  if (r1 < -1000 || r1 > 1000) return 1;
  else if (s < -1000 || s > 1000) return 1;

  cout << (2 * s) - r1 << endl;
  return 0;
}
