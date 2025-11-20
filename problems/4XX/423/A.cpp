#include <iostream>
using namespace std;

int X, C;

int main() {
  cin >> X >> C;

  int ans = 0;
  for (int i=0; i<X; i+=1000) {
    int cost = C * (i/1000);
    if (cost + i < X) ans = i;
  }
  cout << ans << endl;
  return 0;
}

