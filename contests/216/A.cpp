#include <iostream>
using namespace std;

int X;
int Y;
double I;

int main() {
  cin >> I;
  X = (int)I;
  Y = (int)((I-X) * 10);

  if (Y>=7) cout << X << "+";
  else if (Y>=3) cout << X;
  else cout << X << "-";
  cout << endl;
  return 0;
}
