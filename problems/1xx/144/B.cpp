#include <iostream>
using namespace std;
int n;
int main() {
  cin >> n;
  for (int a=1; a<=9; ++a) {
    for (int b=1; b<=9; ++b) {
      if (n == a * b) {cout << "Yes" <<endl; return 0;}
    }
  }
  cout << "No" << endl;
  return 0;
}
