#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N; cin >> N;
  int M; cin >> M;
  vector<int> A;
  int S = 0;
  for (int i=0; i<N; ++i) {
    int a = 0;
    cin >> a;
    A.push_back(a);
    S += a;
  }

  for (int i=0; i<N; ++i) {
    int d = A[i];

    if (S-d == M) {
      cout << "Yes\n";
      return 0;
    }
  }

  cout << "No\n";
  return 0;
}
