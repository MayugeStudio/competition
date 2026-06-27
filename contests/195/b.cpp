#include <iostream>
using namespace std;

#define inf 1000000000

int main() {
  int a, b, w; cin >> a >> b >> w;
  w = w * 1000;
  int mi = inf;
  int ma = -1;
  for (int ch=0; ch<w+1; ++ch) {
    int l = ch * a;
    int r = ch * b;
    if (l <= w && w <= r) {
      if(ch < mi) mi = ch;
      if(ch > ma) ma = ch;
    }
  }
  if (mi == inf) {
    cout << "UNSATISFIABLE" << endl;
  } else {
    cout << mi << " " << ma << endl;
  }

  return 0;
}
