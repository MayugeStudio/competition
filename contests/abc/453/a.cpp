#include <iostream>
#include <string>
using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;
  auto it = s.begin();
  while (it != s.end() && *it == 'o') it++;

  for (auto i=it; i!=s.end(); ++i) {
    cout << *i;
  }

  return 0;
}
