#include <iostream>
#include <string>
#include <cmath>
using namespace std;

#define ll long long

ll K;
string A, B;

int main() {
  cin >> K;
  cin >> A >> B;

  cout << stoll(A, nullptr, K) * stoll(B, nullptr, K) << endl;
  return 0;
}

