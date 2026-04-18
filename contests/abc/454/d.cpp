#include <iostream>
#include <string>
using namespace std;
using ll = long long;

// void solve() {
//   string a, b; cin >> a >> b;
//   for (auto x = a.find("(xx)"); x != string::npos; x = a.find("(xx)")) {
//     a.replace(x, 4, "xx");
//   }
//   for (auto x = b.find("(xx)"); x != string::npos; x = b.find("(xx)")) {
//     b.replace(x, 4, "xx");
//   }
//   if (a == b) cout << "Yes" << endl;
//   else cout << "No" << endl;
// }

string convert(string x) {
  string t;
  for (int i=0; i<x.size(); ++i) {
    t += x[i];
    if ((int)t.size() == 4 && t.substr(t.size() - 4, 4) == "(xx)") {
      t.erase(t.end()-4, t.end());
      t += "xx";
    }
  }
  return t;
}

void solve() {
  string a, b; cin >> a >> b;
  if (convert(a) == convert(b)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

int main() {
  ll t; cin >> t;
  for (int i=0; i<t; ++i) {
    solve();
  }
  return 0;
}
