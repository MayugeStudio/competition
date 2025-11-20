#include <iostream>
using namespace std;

#define ll long long 

ll N;
ll A[1000];
ll B[1000];
int main() {
  cin >> N;
  for (int i=0; i<N; ++i) cin >> A[i] >> B[i];
  for (int i=0; i<N; ++i) cout << A[i] + B[i] << endl;
  return 0;
}
