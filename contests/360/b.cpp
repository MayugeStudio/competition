#include <iostream>
#include <string>
#include <vector>
using namespace std;

string s, t;
int main() {
  cin >> s >> t;

  for (int w=1; w<s.size(); ++w) {
    for (int c=0; c<w; ++c) {
      string a = "";

      for (int i=c; i<s.size(); i+=w) {
        a += s[i];
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
