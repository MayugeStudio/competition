#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; ++i) cin >> a[i];
  set<int> s(a.begin(), a.end());
  vector<int> vs(s.begin(), s.end());

  map<int, int> ranking;
  for (int i=0; i<vs.size(); ++i) {
    ranking[vs[i]] = i;
  }

  vector<int> zaatsu(n);
  for (int i=0; i<n; ++i) {
    zaatsu[i] = ranking[a[i]];
  }

  for (int i=0; i<n; ++i) {
    cout << zaatsu[i] << endl;
  }

  return 0;
}
