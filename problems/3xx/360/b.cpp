#include <iostream>
#include <string>
#include <vector>
using namespace std;

string s, t;
vector<string> v;
int main() {
  cin >> s >> t;

  for (int w=1; w<s.size(); ++w) {
    for (int c=0; c<w; ++c) {
      v.clear();
      string a;

      for (int i=0; i<=s.size(); i+=w) {
        if (i == c) a += s[c];
      }

      if (t == a) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;

  return 0;
}
