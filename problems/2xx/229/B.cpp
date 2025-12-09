#include <iostream>
using namespace std;

#define easy "Easy"
#define hard "Hard"
#define ll long long

int main() {
  ll a, b; cin >> a >> b;
  while (a != 0 && b != 0) {
    int a1 = a%10;
    int b1 = b%10;
    a /= 10;
    b /= 10;

    if (a1 + b1 >= 10) {
      cout << hard << endl;
      return 0;
    }
  }

  cout << easy << endl;
  return 0;
}

