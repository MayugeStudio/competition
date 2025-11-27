#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N; cin >> N;
  vector<int> in(N);
  vector<int> ans(N);

  for (int i=0; i<N; ++i) cin >> in[i];

  for (int i=0; i<N; ++i) {
    ans[in[i]-1] = i+1;
  }

  for (int i=0; i<N; ++i) {
    if (i != 0) cout << " ";
    cout << ans[i];
  }
  cout << endl;

  return 0;
}
