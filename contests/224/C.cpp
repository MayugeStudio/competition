#include <iostream>
#include <utility>
#include <vector>
using namespace std;
#define ll long long

int n;
int main() {
  cin >> n;

  vector<pair<ll, ll>> v(n);
  for (int i=0; i<n; ++i) cin >> v[i].first >> v[i].second;

  int res = 0;
  for (int x=0; x<n; ++x) {
    for (int y=x+1; y<n; ++y) {
      for (int z=y+1; z<n; ++z) {
        if ((v[y].first-v[x].first)*(v[z].second-v[x].second)-(v[z].first-v[x].first)*(v[y].second-v[x].second)!=0) {res++;}
      }
    }
  }
  cout << res << endl;

  return 0;
}

