#include <iostream>
using namespace std;

long long X;

int main() {
  cin >> X;
  long long m[10] = {0};

  while (X != 0) {
    long long x = X % 10;
    X = X / 10;
    m[x]++;
  }

  // first digit
  for (long long i=1; i<=9; ++i) {
    if (m[i] != 0) {
      m[i]--;
      cout << i;
      break;
    }
  }

  for (long long i=0; i<=9; ++i) {
    for (long long k=0; k<m[i]; ++k) cout << i;
  }
  
  cout << endl;
}

