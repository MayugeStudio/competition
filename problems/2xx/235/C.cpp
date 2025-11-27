#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define ll long long

ll n, q;
map<int, vector<ll>> m;

ll x, k;

int main() {
  cin >> n >> q;
  for (int i=0; i<n; ++i) {
    int a; cin >> a;
    m[a].push_back(i+1);
  }

  for (int i=0; i<q; ++i) {
    cin >> x >> k;
    if (k > m[x].size()) cout << -1 << endl;
    else cout << m[x][k-1] << endl;
  }

  return 0;
}
