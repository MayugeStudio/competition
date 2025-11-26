#include <iostream>
#include <vector>
using namespace std;

int N, M, K;

int main() {
  cin >> N >> M >> K;
  vector<int> v(N);
  vector<int> ans;
  int max = 0;
  for (int i=0; i<M; ++i) max += (i+1);
  for (int i=0; i<K; ++i) {
    int A, B;
    cin >> A >> B;
    v[A-1] += B;
    if (v[A-1] == max) {
      ans.push_back(A);
    }
  }

  for (int i=0; i<ans.size(); ++i) {
    cout << ans[i] << " ";
  }
  cout << endl;

  return 0;
}

