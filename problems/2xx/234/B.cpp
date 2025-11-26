#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int N;
double X[100];
double Y[100];

int main() {
  cin >> N;
  double ans = 0;
  for (int i=0; i<N; ++i) cin >> X[i] >> Y[i];

  for (int i=0; i<N; ++i) {
    for (int j=0; j<N; ++j) {
      if (i == j) continue;

      double d = pow(X[i]-X[j], 2) + pow(Y[i]-Y[j], 2);
      if (d > ans) ans = d;
    }
  }

  cout << setprecision(20) << sqrt(ans) << endl;
}
