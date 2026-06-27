#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

long long A, B;

int main() {
  cin >> A >> B;
  cout << fixed << setprecision(0) << pow(32, A-B) << endl;
}

