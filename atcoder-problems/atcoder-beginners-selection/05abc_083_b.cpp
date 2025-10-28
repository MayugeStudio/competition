#include <iostream>
using namespace std;

int main() {
  int N; cin >> N;
  int A; cin >> A;
  int B; cin >> B;

  int ans = 0;

  for (int i=A; i<=N; ++i) {
    int s = 0;
    int counter = i;
    while (counter != 0) {
      s += (counter % 10);
      counter /= 10;
    }
    if (A <= s && s <= B) {
      ans += i;
    }
  }

  cout << ans << endl;

  return 0;
}
