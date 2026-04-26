#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
  int n; cin >> n;
  set<string> ss;
  for (int i=0; i<n; ++i) {
    string s; cin >> s; 
    if (!ss.count(s)) {
      ss.insert(s);
      cout << i + 1 << endl;
    }
  }
  return 0;
}
