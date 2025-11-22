#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> A;

int main() {
  cin >> N;
  A.resize(N);

  for (int i=0; i<N; ++i) cin >> A[i];
  
  for (int i=1; i<=N; ++i) {
    int a = A[i-1];
    int taller = -1;
    for (int k=1; k<=i; ++k) {
      if (a < A[k-1]) {
        taller = k;
      }
    }
    cout << taller << endl;
  }
  return 0;
}

