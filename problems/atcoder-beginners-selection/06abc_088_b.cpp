#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N; cin >> N;
  int ans = 0;
  vector<int> v;
  for (int i=0; i<N; ++i) {
    int a; cin >> a;
    v.push_back(a);
  }

  sort(v.rbegin(), v.rend());

  bool alice = true;
  for (int i=0; i<N; ++i) {
    if (alice) ans += v[i];
    else ans -= v[i];
    alice = !alice;
  }

  cout << ans << endl;
}
