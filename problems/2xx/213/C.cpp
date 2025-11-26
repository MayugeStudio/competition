#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define ll long long

vector<ll> rows;
vector<ll> cols;

int main() {
  ll H, W, N;
  cin >> H >> W >> N;

  vector<ll> X(N), Y(N);

  for (int i=0; i<N; ++i) cin >> X[i] >> Y[i];

  auto nx = X, ny = Y;
  sort(nx.begin(), nx.end());
  nx.erase(unique(nx.begin(), nx.end()));
  sort(ny.begin(), ny.end());
  ny.erase(unique(ny.begin(), ny.end()));

  for (int i=0; i<N; ++i) {
    int xres = lower_bound(nx.begin(), nx.end(), X[i]) - nx.begin();
    int yres = lower_bound(ny.begin(), ny.end(), Y[i]) - ny.begin();
    cout << xres + 1 << " " << yres + 1 << endl;
  }

  return 0;
}
