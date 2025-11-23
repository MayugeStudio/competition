#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>

using namespace std;
int N, X;
vector<int> A;
vector<int> T;

int f(int n) {
  T.resize(A.size());
  copy(A.begin(), A.end(), T.begin());

  T.push_back(n);
  sort(T.begin(), T.end());

  int sum = 0;
  for (int i=1; i<N-1; ++i) {
    sum += T[i];
  }
  T.clear();
  return sum;
}

int main() {
  cin >> N >> X;
  A.resize(N-1);
  for (int i=0; i<N-1; ++i) cin >> A[i];

  int ans = 101;
  for (int i=0; i<=100; ++i) {
    int s = f(i);
    int d = X - s;
    if (d <= 0 && i < ans) {
      ans = i;
    }
  }

  if (ans == 101) cout << -1 << endl;
  else cout << ans << endl;

  return 0;
}
