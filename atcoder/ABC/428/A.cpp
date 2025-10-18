#include <iostream>

using namespace std;


int main() {
  int S;
  int A;
  int B;
  int X;

  cin >> S >> A >> B >> X;

  int acc = 0;
  int m = 0;
  int t = 0;
  bool run = true;
  while (t < X) {
    if (run) {
      m += S;
    }    
    acc++;

    if (acc >= A && run) {
      acc = 0;
      run = false;
    } else if (acc >= B && !run) {
      acc = 0;
      run = true;
    }

    t++;
  }

  cout << m << endl;
}
