#include <iostream>
using namespace std;

long long X, C;

int main() {
  cin >> X >> C;

  long long ans = 0;
  for (long long i=0; i<=X; i+=1000) {
    long long cost = C * (i / 1000);
    if (cost + i <= X) ans = i;
  }
  cout << ans << endl;
  return 0;
}

