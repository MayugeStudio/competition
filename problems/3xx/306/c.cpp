#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;
using pii = pair<int, int>;

int n; 
vector<int> a;
vector<int> cnt;
vector<pii> ans;

// int f(int x) {
//   int cnt = 0;
//   for (int i=0; i<3*n; ++i) {
//     if (a[i] == x) cnt++;
//     if (cnt == 2) {
//       return i;
//     }
//   }
//
//   return -1;
// }

int main() {
  cin >> n;
  a = vector<int>(3*n);
  cnt = vector<int>(n+1);

  for (int i=0; i<3*n; ++i) cin >> a[i];

  for (int i=0; i<3*n; ++i) {
    int x = a[i];
    cnt[x]++;
    if (cnt[x] == 2) {
      ans.push_back(make_pair(i, x));
    }
  }

  sort(ans.begin(), ans.end());

  for (int i=0; i<n; ++i) {
    cout << ans[i].second << " ";
  }

  return 0;
}

