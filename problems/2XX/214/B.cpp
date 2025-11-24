#include <iostream>
using namespace std;

int S, T;

int main() {
  cin >> S >> T;

  int ans = 0;
  for (int a=0; a<=100; ++a) {
    for (int b=0; b<=100-a; ++b) {
      for (int c=0; c<=100-a-b; ++c) {
        if (a + b + c <= S && a * b * c <= T) {
          ans++;
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}
