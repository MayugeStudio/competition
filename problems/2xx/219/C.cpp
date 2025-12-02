#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

map<char, int> nl;
int n;
vector<string> s;
string x;

bool compare_less(string s1, string s2) {
  int i=0;
  for (int i=0; i<s1.size(); ++i) {
    if (nl[s1[i]] < nl[s2[i]]) {
      return true;
    } else if (nl[s1[i]] > nl[s2[i]]) {
      return false;
    }
  }

  if (s1.size() < s2.size()) return true;
  return false;
}

int main() {
  cin >> x; cin >> n;
  s.resize(n);
  for (int i=0; i<n; ++i) cin >> s[i];

  for (int i=0; i<x.length(); ++i) nl[x[i]] = i+1;
  sort(s.begin(), s.end(), compare_less);

  for (int i=0; i<n; ++i) cout << s[i] << endl;

  return 0;
}

