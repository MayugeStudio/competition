#include <iostream>
#include <vector>
using namespace std;

int H, W;
vector<vector<long long>> A;

int main() {
  cin >> H >> W;
  A.resize(H);

  for (int i=0; i<H; ++i) {
    A[i].resize(W);
    for (int j=0; j<W; ++j) cin >> A[i][j];
  }
  for (int i1=0; i1<H; ++i1) {
    for (int i2=i1+1; i2<H; ++i2) {
      for (int j1=0; j1<W; ++j1) {
        for (int j2=j1+1; j2<W; ++j2) {
          if (A[i1][j1] + A[i2][j2] > A[i2][j1]+A[i1][j2]) {
            cout << "No" << endl;
            return 0;
          }
        }
      }
    }
  }

  cout << "Yes" << endl;
  return 0;
}

