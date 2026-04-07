#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

struct Card {
  ll a, c;
  ll id;

  Card() {}
  Card(int a, int c, int i) : a(a), c(c), id(i) {}
};

int main() {
  ll n; cin >> n;
  vector<Card> v(n);
  for (int i=0; i<n; ++i) {
    ll a, c; cin >> a >> c;
    v[i] = Card(a, c, i+1);
  }

  sort(v.begin(), v.end(), [&](Card a, Card b) {return a.a > b.a;});

  vector<int> res;
  int prev = 1<<30;
  for (int i=0; i<n; ++i) {
    if (v[i].c < prev) {
      prev = v[i].c;
      res.push_back(v[i].id);
    }
  }

  sort(res.begin(), res.end());
  cout << res.size() << endl;
  for (int i=0; i<res.size(); ++i) {
    cout << res[i] << " ";
  }
  cout << endl;
  return 0;
}
