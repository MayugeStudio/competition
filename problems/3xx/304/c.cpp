#include <iostream>
#include <vector>
#include <utility>
#include <queue>
using namespace std;
int distp(pair<int, int> p1, pair<int, int> p2) {
  return (p1.first-p2.first) * (p1.first-p2.first)
    + (p1.second-p2.second) * (p1.second-p2.second);
}

int main() {
  int n, d; cin >> n >> d;
  vector<pair<int, int>> p(n);
  vector<bool> sick(n, 0);
  for (int i=0; i<n; ++i) cin >> p[i].first >> p[i].second;

  queue<int> que;
  que.push(0);
  sick[0] = true;
  while (!que.empty()) {
    int x = que.front(); que.pop();

    for (int j=0; j<n; ++j) {
      if (x == j) continue;
      if (sick[j] || distp(p[x], p[j]) > d*d) continue;
      sick[j] = true;
      que.push(j);
    }
  }

  for (int i=0; i<n; ++i) {
    if (sick[i]) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }

  return 0;
}
