#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;
using ll = long long;

int main() {
  int n; string ss; cin >> n >> ss;
  
  vector<int> as1;
  vector<int> as2;

  for (int i=0; i<2*n; ++i) {
    if (ss[i] == 'A') {
      as1.push_back(i);
      as2.push_back(i);
    }
  }

  // ABABAB... パターン
  ll pattern1 = 0;
  for (int k=0; k<n; ++k) {
    pattern1 += abs(as1[k] - 2*k);
  }


  // BABABA... パターン
  ll pattern2 = 0;
  for (int k=0; k<n; ++k) {
    pattern2 += abs(as2[k] - (2*k+1));
  }

  if (pattern1 < pattern2) cout << pattern1 << endl;
  else cout << pattern2 << endl;

  return 0;
}
