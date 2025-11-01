#include <iostream>
using namespace std;

int X[100];

int main() {
  int N; cin >> N;
  int K; cin >> K;
  for (int i=0; i<N; ++i) cin >> X[i];

  int ans = 0;

  for (int i=0; i<N; ++i) {
    // xの数によって場合分け
    int x = X[i];
    if (K-x < x) {
      ans += (K-x)*2;
    } else {
      ans += x*2;
    }
  }

  cout << ans << endl;

  return 0;
}
