#include <iostream>
using namespace std;

int abc;
int a, b, c;

int main() {
  cin >> abc;

  int abct = abc;
  c = abc % 10; abc/=10;
  b = abc % 10; abc/=10;
  a = abc % 10; abc/=10;

  int bca = b * 100 + c * 10 + a;
  int cab = c * 100 + a * 10 + b;

  cout << abct + bca + cab << endl;

  return 0;
}

