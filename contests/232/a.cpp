#include <iostream>
using namespace std;
int main() {
  string axb; cin >> axb;

  int a = axb[0] - '0';
  int b = axb[2] - '0';

  cout << a * b << endl;

  return 0;
}
