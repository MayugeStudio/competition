#include <iostream>
#include <vector>
using namespace std;

#define ll long long 

ll N;
ll D[2000][2000];
struct Cloud{ int u, d, l, r; };
vector<Cloud> cs;

int main() {
  cin >> N;
  cs.resize(N);

  for (int i=0; i<N; ++i) {
    int u, d, l, r;
    cin >> u >> d >> l >> r;
    cs[i] = Cloud{u, d, l, r};
  }

  for (int i=0; i<N; ++i) {
    fill_n(&D[0][0], 2000*2000, 0);
    for (int t=0; t<N; ++t) {
      if (t == i) continue;
      Cloud c = cs[t];
      for (int y=c.u; y<=c.d; ++y) {
        for (int x=c.l; x<=c.r; ++x) {
          D[y][x]++;
        }
      }
    }
    ll ans = 0;
    for (ll row = 0; row<2000; ++row) {
      for (ll col = 0; col<2000; ++col) {
        if (D[row][col] > 0) ans++;
      }
    }
    cout << 2000*2000 - ans << endl;
  }
  return 0;
}
