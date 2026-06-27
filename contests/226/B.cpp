#include <iostream>
#include <vector>
#include <map>
using namespace std;

int n;
int main() {
  cin >> n;
  map<vector<int>, int> m;

  for (int i=0; i<n; ++i) {
    int l; cin >> l;
    vector<int> v(l);
    for (int i=0; i<l; ++i) cin >> v[i];
    m[v]++;
  }

  cout << m.size() << endl;
  return 0;
}

