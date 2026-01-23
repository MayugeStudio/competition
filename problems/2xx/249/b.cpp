#include <iostream>
#include <string>
using namespace std;

int main() {
  string s; cin >> s;
  int n = s.size();

  // Find uppercase letter
  bool uppercase_ok = false;
  for (int i=0; i<n; ++i) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      uppercase_ok = true;
    }
  }

  // Find lowercase letter
  bool lowercase_ok = false;
  for (int i=0; i<n; ++i) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      lowercase_ok = true;
    }
  }

  // Find duplicate letter
  bool is_dup = false;
  for (int i=0; i<n; ++i) {
    for (int j=i+1; j<n; ++j) {
      if (s[i] == s[j]) {
        is_dup = true;
      }
    }
  }

  if (uppercase_ok && lowercase_ok && !is_dup) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
