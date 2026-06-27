#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  map<string, int> m;
  vector<string> vs(n);

  for (int i=0; i<n; ++i) {
    cin >> vs[i];
  }

  for (int i=0; i<n; ++i) {
    string s = vs[i];
    m[s]++;
    if (m[s] == 1) {
      cout << s << endl;
    } else {
      cout << s << '(' << m[s]-1 << ')' << endl;
    }
  }

  return 0;
}

