#include <iostream>
using namespace std;

int N;
int main() {
  cin >> N;
  int ans = 0;
  for (int i=1; i<=N; ++i) {
    int t;
    cin >> t;
    if (i % 2 == 1) ans += t;
  }

  cout << ans << endl;
  return 0;
}
