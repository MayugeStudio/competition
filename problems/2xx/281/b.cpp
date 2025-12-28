#include <iostream>
#include <string>
using namespace std;

int main() {
  string s; cin >> s;
  int n = s.size();
  if (n != 8) {
    cout << "No" << endl;
    return 0;
  }
  if (s[0]>='A' && s[0]<='Z') {}
  else {cout << "No" << endl; return 0;}

  string t;
  for (int i=1; i<n-1; i++) {
    t += s[i];
  }
  int i = stoi(t);
  if (i < 100000 || i > 999999) {
    cout << "No" << endl;
    return 0;
  }

  if (s[n-1]>='A' && s[n-1]<='Z') {}
  else {cout << "No" << endl; return 0;}

  cout << "Yes" << endl;

  return 0;
}
