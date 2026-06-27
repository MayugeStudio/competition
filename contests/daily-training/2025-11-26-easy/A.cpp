#include <iostream>
using namespace std;

char S[] = "atcoder";

int L, R;

int main() {
  cin >> L >> R;

  for (int i=L-1; i<R; ++i) {
    cout << S[i];
  }
  cout << endl;
}

