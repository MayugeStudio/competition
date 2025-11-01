#include <iostream>
using namespace std;

int main() {
  long long  N; cin >> N;
  long long  K; cin >> K;

  long long  amari = N % K;
  long long  Khikuamari = K - amari;

  if (amari < Khikuamari) {
    cout << amari << endl;
  } else {
    cout << Khikuamari << endl;
  }

  return 0;
}
