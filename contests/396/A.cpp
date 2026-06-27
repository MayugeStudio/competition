#include <iostream>
using namespace std;

int N;
int A[100];

int main() {
  cin >> N;
  for (int i=0; i<N; ++i) cin >> A[i];

  int cnt = 0;
  int t = A[0];
  for (int i=1; i<N; ++i) {
    if (t == A[i]) {
      cnt++;
    } else {
      cnt = 0;
      t = A[i];
    }

    if (cnt == 2) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}
