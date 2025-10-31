#include <iostream>
using namespace std;

bool iseven(long long x) {
  return x%2 == 0;
}

int main() {
  long long A; long long B; long long C;
  cin >> A >> B >> C;

  if (!iseven(A) && !iseven(B) && !iseven(C)) {
    cout << 0 << endl;
    return 0;
  }
  if (A == B && B == C) {
    cout << -1 << endl;
    return 0;
  }

  long long ans = 0;

  while (iseven(A) && iseven(B) && iseven(C)) {
    long long at = A/2;
    long long bt = B/2;
    long long ct = C/2;

    A = bt + ct;
    B = at + ct;
    C = at + bt;
    ans ++;
  }

  
  cout << ans << endl;

  return 0;
}
