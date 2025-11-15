#include <iostream>
using namespace std;

int N, D, X;
int A[101];

int main() {
  cin >> N >> D >> X;
  for (int i=0; i<N; ++i) cin >> A[i];

  int ans = 0;
  for (int i=0; i<N; ++i) {
    int d = 0;
    while (d * A[i] + 1 <= D) {
      d++;
      ans++;
    }
  }

  ans += X;
  cout << ans << endl;
  return 0;
}

