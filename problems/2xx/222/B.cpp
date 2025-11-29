#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, P;

int main() {
  cin >> N >> P;
  vector<int> A(N);
  for (int i=0; i<N; ++i) cin >> A[i];
  sort(A.begin(), A.end());
  cout << lower_bound(A.begin(), A.end(), P) - A.begin() << endl;
}

