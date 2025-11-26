#include <iostream>
#include <vector>

using namespace std;

#define ll long long

ll N;

int main() {
  cin >> N;
  vector<ll> v;
  v.resize(N);
  for (int i=0; i<N; ++i) cin >> v[i];

  int ans = v[0];
  for (int i=1; i<N; ++i) {
    if (v[i] <= ans) break;
    ans = v[i];
  }

  cout << ans << endl;

  return 0;
}

