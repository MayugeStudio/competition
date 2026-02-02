#include <iostream>
#include <string>
using namespace std;

using ll = long long;

int main() {
  string s;
  cin >> s;
  ll n = s.size();
  ll res = 0, add=26;
  for (int i=1; i<=n-1; ++i) {
    res += add;
    add *= 26;
  }
  
  ll num = 0;
  for (int i=0; i<n; ++i) {
    num *= 26;
    num += (s[i] - 'A');
  }

  cout << res + num + 1 << endl;


  return 0;
}
