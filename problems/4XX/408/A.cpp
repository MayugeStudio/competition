#include <iostream>
using namespace std;

int N, S;
int T[1000];

int main() {
  cin >> N >> S;
  for (int i=0; i<N; ++i) cin >> T[i];

  int prev = 0;

  for (int i=0; i<N; ++i) {
    if (S + 0.5 < T[i] - prev) {
      cout << "No" << endl;
      return 0;
    }
    prev = T[i];
  }
  cout << "Yes" << endl;
  return 0;
}
