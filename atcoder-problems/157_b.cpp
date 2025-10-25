#include <iostream>
using namespace std;


int main() {
  int A[3][3];
  bool ans[3][3];
  for (int i=0; i<3; ++i) {
    for (int j=0; j<3; ++j) {
      cin >> A[i][j];
      ans[i][j] = false;
    }
  }

  int N; cin >> N;
  for (int i=0; i<N; ++i) {
    int b; cin >> b;
    for (int i=0; i<3; ++i) {
      for (int j=0; j<3; ++j) {
        if (b == A[i][j]) {
          ans[i][j] = true;
        }
      }
    }
  }

  bool ok = false;
  // naname
  if (ans[0][0] && ans[1][1] && ans[2][2]) ok=true;
  if (ans[0][2] && ans[1][1] && ans[2][0]) ok=true;

  // yoko
  if (ans[0][0] && ans[0][1] && ans[0][2]) ok=true;
  if (ans[1][0] && ans[1][1] && ans[1][2]) ok=true;
  if (ans[2][0] && ans[2][1] && ans[2][2]) ok=true;

  // tate
  if (ans[0][0] && ans[1][0] && ans[2][0]) ok=true;
  if (ans[0][1] && ans[1][1] && ans[2][1]) ok=true;
  if (ans[0][2] && ans[1][2] && ans[2][2]) ok=true;

  if (ok) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}

