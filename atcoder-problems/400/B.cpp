#include <iostream>
#include <math.h>

using namespace std;

double N, M, X;


int main() {
  cin >> N >> M;
  for (double i=0;i<=M;++i) {
    X += pow(N, i);
  }
  if (X > pow(10, 9)) {
    cout << "inf" << endl;
    return 0;
  }
  cout << int(X) << endl;
}
