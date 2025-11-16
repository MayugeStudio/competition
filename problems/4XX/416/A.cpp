#include <iostream>
#include <string>
using namespace std;

int N, L, R;
string S;

int main() {
  cin >> N >> L >> R;
  cin >> S;
  for (int i=L-1; i<R; ++i) {
    if (S[i] != 'o') {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}

