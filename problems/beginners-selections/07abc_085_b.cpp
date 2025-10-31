#include <iostream>
#include <vector>
using namespace std;

int main() {
  int K; cin >> K;
  int N; cin >> N;
  vector<int> A;
  for (int i=0; i<N; ++i) {
    int a; cin >> a;
    A.push_back(a);
  }

  int ans = A[N-1] - A[0];
  for (int i=0; i<N; ++i) {
    int i_to_end = K - A[i];
    int end_to_i = A[i-1];
    if (i_to_end + end_to_i < ans) {
      ans = i_to_end + end_to_i;
    }
  }
  cout << ans << endl;
  return 0;
}
