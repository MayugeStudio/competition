#include <iostream>
#include <string>
using namespace std;
using ll = long long;

bool is_subseq(string s, string t) {
  ll si = 0;
  ll ti = 0;
  while (ti < t.size() && si < s.size()) {
    if (t[ti] == s[si]) {
      ti++, si++;
    } else {
      si++;
    }
  }

  if (ti == t.size() && si == s.size()) return true;
  else return false;
}

int main() {
  string s, t; cin >> s >> t;

  ll ti = 0;
  ll l = 0;
  ll r = 0;
  ll cnt = 0;
  bool ok = false;
  while (ti < t.size() && si < s.size()) {
    if (t[ti] == s[r]) {
      ti++, r++;
    }
    if (t[ti] == s[l]) {
      ti++, r++;
    }
  }
  return 0;
}
