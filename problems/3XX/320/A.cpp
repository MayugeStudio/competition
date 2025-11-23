#include <iostream>
using namespace std;

int A, B;

int main() {
  cin >> A >> B;
  int ans = 0;

  int AB = 1;
  int BA = 1;
  
  for (int i=0; i<B; ++i) {
    AB *= A;
  }
  for (int i=0; i<A; ++i) {
    BA *= B;
  }

  cout << AB + BA << endl;

  return 0;
}
