#include <iostream>
using namespace std;

int X;
int N;
int W[100];
int P[100];
bool attached[100] = {false};

int main() {
  cin >> X >> N;
  for (int i=0; i<N; ++i) {
    cin >> W[i];
    attached[i] = false;
  }

  int Q; cin >> Q;
  for (int i=0; i<Q; ++i) cin >> P[i];

  for (int i=0; i<Q; ++i) {
    int p = P[i] - 1;
    if (attached[p]) {
      X -= W[p];
    } else {
      X += W[p];
    }
    attached[p] = !attached[p];
    cout << X << endl;
  }
  return 0;
}
