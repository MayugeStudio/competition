#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int l, r; cin >> l >> r;
  string s; cin >> s;
  l--; r--;

  int p=l, q=r;

  while (p<q) {
    swap(s[p], s[q]);
    p++; q--;
  }

  cout << s << endl;

  return 0;
}
