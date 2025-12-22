#include <iostream>
#include <string>
using namespace std;

int n;
string s;
char c1, c2;
int main() {
  cin >> n;
  cin >> c1 >> c2;
  cin >> s;

  for (int i=0; i<n; ++i) {
    if (s[i] != c1) s[i] = c2;
  }
  cout << s << endl;

  return 0;
}
