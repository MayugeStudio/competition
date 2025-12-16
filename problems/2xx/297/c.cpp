#include <iostream>
#include <vector>
using namespace std;

int h, w;

int main() {
  cin >> h >> w;
  vector<string> ss(h);

  for (int i=0; i<h; ++i) cin >> ss[i];

  for (int r=0; r<h; ++r) {
    string s = ss[r];

    for (int i=0; i<w-1; ++i) {
      if (s[i] == 'T' && s[i+1] == 'T') {
        s[i] = 'P';
        s[i+1] = 'C';
      }
    }

    cout << s << endl;
  }
  return 0;
}
