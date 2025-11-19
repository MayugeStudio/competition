#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int N;

int main() {
  cin >> N;
  set<int> s;
  for (int i=0; i<N; ++i) {
    int t; cin >> t;
    s.insert(t);
  }
  vector<int> v(s.begin(), s.end());

  cout << v.size() << endl;
  sort(v.begin(), v.end());

  for (int i=0; i<v.size(); ++i) {
    if (i == 0) cout << v[i];
    else cout << " " << v[i];
  }
  cout << endl;
}
