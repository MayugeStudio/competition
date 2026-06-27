#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int h, w; cin >> h >> w;
  vector<string> s(h);
  for (int i=0; i<h; ++i) { cin >> s[i]; }

  // ue
  while (true) {
    if (count(s[0].begin(), s[0].end(), '.') == w) {
      s.erase(s.begin());
    } else {
      break;
    }
  }
  // cout << "ue finished" << endl;
  // shita
  while (true) {
    if (count(s[s.size()-1].begin(), s[s.size()-1].end(), '.') == w) {
      s.pop_back();
    } else {
      break;
    }
  }
  // cout << "shita finished" << endl;
  // hidari
  while (true) {
    if (s[0].empty()) break;
    bool ok = true;
    for (int i=0; i<s.size(); ++i) {
      if (s[i][0] != '.')ok = false;
    }
    if (ok) {
      for (int i=0; i<s.size(); ++i) {
        // cout << s[i][0] << endl;
        s[i].erase(0, 1);
      }
    } else {
      break;
    }
  }
  // cout << "hidari finished" << endl;
  // migi
  while (true) {
    bool ok = true;
    for (int i=0; i<s.size(); ++i) {
      if (s[i][s[i].size()-1] != '.') ok = false;
    }
    if (ok) {
      if (s[0].empty()) break;
      for (int i=0; i<s.size(); ++i) {
        s[i].pop_back();
      }
    } else {
      break;
    }
  }
  // cout << "migi finished" << endl;

  for (int i=0; i<s.size(); ++i) {
    cout << s[i] << endl;
  }
}
