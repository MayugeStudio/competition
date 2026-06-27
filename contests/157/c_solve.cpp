#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> s, c;

bool ok(string str) {
  if (str.size() != n) return false;
  for (int i=0; i<m; ++i) 
    if (str[s[i]] != (char)(c[i]+'0')) return false;
  return true;
}

int main() {
  cin >> n >> m;
  s.resize(m); c.resize(m);
  for (int i=0; i<m; ++i) {
    cin >> s[i] >> c[i]; s[i]--;
  }
  for (int i=0; i<=999; ++i) {
    string e = to_string(i);
    if (ok(e)) {
      cout << e << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}
