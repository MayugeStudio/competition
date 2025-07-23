#include <iostream>
#include <string>
#include <vector>
using namespace std;

int H, W;

int main() {
  cin >> H >> W;
  vector<string> A(H), B(H);
  for (int row=0;row<H;++row) {
    cin >> A[row];
  }
  for (int row=0;row<H;++row) {
    cin >> B[row];
  }

  for (int s=0;s<H;++s) {
    for (int t=0;t<W;++t) {
      bool flag = true;
      for (int i=0;i<H;++i) {
        for (int j=0;j<W;++j) {
          if (A[(i-s+H)%H][(j-t+W)%W] != B[i][j]) {
            flag = false;
          }
        }
      }
      if (flag) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
}
