#include <iostream>
#include <vector>
using namespace std;

int f(int n) {
  if (n == 0) return 1;
  int r = 0;
  while (n > 0) {
    r += n % 10;
    n /= 10;
  }
  return r;
}

int N;
int main() {
  cin >> N;
  vector<int> A(N+1);
  A[0] = 1;
  for (int i=1; i<=N; ++i) {
    for (int j=0; j<i; ++j) A[i] += f(A[j]);
  }
  cout << A[N] << endl;
  return 0;
}

