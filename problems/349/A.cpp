#include <iostream>
using namespace std;

int main() {
  int N; cin >> N;
  int ans = 0;
  for (int i=0; i<N-1; ++i) {
    int t; cin >> t;
    ans += t;
  }

  cout << -ans << endl;
  return 0;
}

