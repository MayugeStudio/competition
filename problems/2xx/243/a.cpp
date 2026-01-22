#include <iostream>
using namespace std;

int main() {
  int v, a, b, c; cin >> v >> a >> b >> c;

  while (true) {
    if (v < a) {cout << "F"; break;}
    v-=a;
    if (v < b) {cout << "M"; break;}
    v-=b;
    if (v < c) {cout << "T"; break;}
    v-=c;
  }

  cout << endl;

  return 0;
}
