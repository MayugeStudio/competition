#include <iostream>

using namespace std;

int n;

bool hantei(string &s) {
  int score = 0;
  for (int i = 0; i < n; ++i) {
    if (s[i] == '(') {
      score += 1;
    } else if (s[i] == ')') {
      score -= 1;
    }

    if (score < 0) {
      return false;
    }
  }
  return score == 0;
}

int main() {
  cin >> n;

  for (int bit = 0; bit < (1 << n); ++bit) {
    string s = "";
    for (int i = n - 1; i >= 0; --i) {
      if (!(bit & (1 << i)))
        s += '(';
      else
        s += ')';
    }

    if (hantei(s))
      cout << s << endl;
  }

  return 0;
}
