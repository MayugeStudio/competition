#include <iostream>
#include <bitset>
using namespace std;

int n;
int main() {
  bitset<4> bs;
  cin >> bs;
  bs = bs >> 1;

  cout << bs << endl;

  return 0;
}
