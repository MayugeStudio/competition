#include <iostream>
#include <string>
using namespace std;
using ll = long long;
int main() {
  ll n; cin >> n;
  string s; cin >> s;
  string ss = "";
  for (int i=0; i<n; ++i) {
    if (s[i] == '.') continue;
    ss += s[i];
  }
  if (ss[0] == '|' && ss[2] == '|') cout << "in" << endl;
  else cout << "out" << endl;
  return 0;
}
