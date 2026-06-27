#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  string s, t; cin >> s >> t;

  int q; cin >> q;

  vector<string> w(q);
  for (int i=0; i<q; ++i) cin >> w[i];

  for (int i=0; i<q; ++i) {
    string word = w[i];

    // takahashi
    bool is_takahashi = true;
    for (int j=0; j<word.size(); ++j) {
      char c = word[j];

      bool found = false;
      for (int k=0; k<n; ++k) {
        if (c == s[k]) {
          found = true;
        }
      }

      if (!found) {
        is_takahashi = false;
        break;
      }
    }

    // aoki
    bool is_aoki = true;
    for (int j=0; j<word.size(); ++j) {
      char c = word[j];

      bool found = false;
      for (int k=0; k<m; ++k) {
        if (c == t[k]) {
          found = true;
        }
      }

      if (!found) {
        is_aoki = false;
        break;
      }
    }

    if (is_aoki && is_takahashi) {
      cout << "Unknown" << endl;
    } else if (is_aoki && !is_takahashi) {
      cout << "Aoki" << endl;
    } else if (!is_aoki && is_takahashi) {
      cout << "Takahashi" << endl;
    } else {
      cout << "Unknown" << endl;
    }
  }

  return 0;
}
