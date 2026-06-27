#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long

ll n;
vector<ll> a;

int main() {
  cin >> n; a.resize(n);
  for (int i=0; i<n; ++i) cin >> a[i];

  ll skip = 1;
  ll idx = 0;
  while(idx < n && skip > 0) {
    // サイズ1のドミノを倒す場合
    if (a[idx] == 1) skip--; 
    // 1より大きいdominoを倒す場合
    else skip = max(a[idx]-1, skip-1);

    // 実際に倒す
    idx++;
  }

  cout << min(idx, n) << endl;

  return 0;
}
