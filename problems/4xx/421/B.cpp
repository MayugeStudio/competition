#include <iostream>
using namespace std;
#define ll long long

ll f(ll x) {
  ll ret = 0;
  
  while (x != 0) {
    ret *= 10;
    ret += x % 10;
    x /= 10;
  }

  return ret;
}

ll A, B;
ll R[10];

int main() {
  cin >> A >> B;
  ll X = A;
  ll Y = B;
  R[0] = X;
  R[1] = Y;
  R[2] = f(R[1] + R[0]);
  R[3] = f(R[2] + R[1]);
  R[4] = f(R[3] + R[2]);
  R[5] = f(R[4] + R[3]);
  R[6] = f(R[5] + R[4]);
  R[7] = f(R[6] + R[5]);
  R[8] = f(R[7] + R[6]);
  R[9] = f(R[8] + R[7]);
  cout << R[9] << endl;
}
