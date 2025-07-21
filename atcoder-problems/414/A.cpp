#include <iostream>

using namespace std;

int N, L, R;

int X[100], Y[100];
int cnt;

int main() {
  cin >> N >> L >> R;
  for (int i=0;i<N;++i) {
    cin >> X[i];
    cin >> Y[i];
  }
  for (int i=0;i<N;++i) {
  if (X[i] <= L && Y[i] >= R) {
    cnt++;
  }
  }
  cout << cnt << endl;
}
