#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<string> v;
vector<int> cnt;

int main() {
  cin >> N;
  v.resize(N);
  cnt.resize(N);
  for (int i=0; i<N; ++i) cin >> v[i];

  for (int i=0; i<N; ++i) {
    for (int j=0; j<N; ++j) {
      if (v[i][j] == '-') continue;
      if (v[i][j] == 'o') cnt[i]++;
    }
  }

  bool notfirst = false;
  for (int i=N-1; i>=0; --i) {
    for (int k=0; k<cnt.size(); ++k) {
      if (cnt[k] == i) {
        if (notfirst) cout << " ";
        if (!notfirst) notfirst = true;
        cout << k+1;
      }
    }
  }

  cout << endl;

  return 0;
}
