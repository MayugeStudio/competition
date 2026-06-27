#include <iostream>
#include <cmath>
using namespace std;

int A, B;

int main() {
  cin >> A >> B;

  cout << round(static_cast<double>(A) / B) << endl;
  return 0;
}

