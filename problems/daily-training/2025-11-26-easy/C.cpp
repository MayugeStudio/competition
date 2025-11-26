#include <iostream>
using namespace std;

int N;
int X[100], Y[100];

int main() {
  cin >> N;

  for (int i=0; i<N; ++i) cin >> X[i] >> Y[i];

  for (int i=0; i<N; ++i) {
    int cx = X[i];
    int cy = Y[i];

    int ans = -1;
    int maxi = 0;
    for (int k=0; k<N; ++k) {
      if (i == k) continue;

      int d = (cx - X[k]) * (cx - X[k]) + (cy - Y[k]) * (cy - Y[k]);
      if (d > maxi) {
        maxi = d;
        ans = k;
      }
    }
    cout << ans+1 << endl;
  }
  return 0;
}

