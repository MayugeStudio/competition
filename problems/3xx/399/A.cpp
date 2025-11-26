#include <iostream>
#include <string>
using namespace std;

int N;
string S, T;

int main() {
  cin >> N >> S >> T;

  int ans = 0;
  for (int i=0; i<N; ++i) {
    if (S[i] != T[i]) ans++;
  }

  cout << ans << endl;

  return 0;
}
