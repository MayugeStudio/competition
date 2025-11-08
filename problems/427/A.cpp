#include <iostream>
using namespace std;

int main() {
  int N; cin >> N;
  int ans = 0;
  for (int i=1; i<=N; ++i) {
    int tmp = 1;
    for (int j=0; j<i; ++j) tmp *= -1;
    ans += tmp * i * i * i;
  }
  cout << ans << endl;
}

