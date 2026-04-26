#include <iostream>
#include <string>
using namespace std;

int main() {
  string s, t; cin >> s >> t;
  string s_trimed = "";
  for (int i=0; i<s.size(); ++i) {
    if (s[i] == 'A') continue;
    s_trimed += s[i];
  }
  string t_trimed = "";
  for (int i=0; i<t.size(); ++i) {
    if (t[i] == 'A') continue;
    t_trimed += t[i];
  }
  if (s_trimed != t_trimed) {
    cout << "-1" << endl;
    return 0;
  }

  int ans = 0;
  int si = 0;
  int ti = 0;
  while (si < s.size() && ti < t.size()) {
    if (s[si] == t[ti]) {
       si++, ti++;
    } else {
      
      if (s[si] == 'A') {
        si++;
        ans++;
      }
      
      if (t[ti] == 'A') {
        ti++;
        ans++;
      }
    }
  }

  if (si < s.size()) ans += s.size() - si;
  if (ti < t.size()) ans += t.size() - ti;

  cout << ans << endl;
  return 0;
}
