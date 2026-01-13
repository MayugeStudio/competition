#include <iostream>
#include <string>
using namespace std;

int main() {
  string s; cin >> s;
  int n = s.size();

  int cnt1 = 0;
  char cur = '0';
  for (int i=0; i<n; ++i) {
    if (s[i] != cur) cnt1++;
    
    if (cur == '0') cur = '1';
    else cur = '0';
  }

  int cnt2 = 0;
  cur = '1';
  for (int i=0; i<n; ++i) {
    if (s[i] != cur) cnt2++;
    
    if (cur == '0') cur = '1';
    else cur = '0';
  }

  if (cnt1 < cnt2) cout << cnt1 << endl;
  else cout << cnt2 << endl;

  return 0;
}
