// Headers
#include <bits/stdc++.h>
using namespace std;

// Type definitions
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<long long, long long>;

// Macros
#define all(x)  x.begin(),  x.end()
#define rall(x) x.rbegin(), x.rend()
#define Yes cout << "Yes" << endl
#define No  cout << "No" << endl
#define YES cout << "YES" << endl
#define NO  cout << "NO" << endl


int main() {
  ll n; cin >> n;
  vector<ll> a(n);
  for (int i=0; i<n; ++i) cin >> a[i];

  sort(all(a));

  ll max_length = *max_element(all(a));

  string ans(max_length, '0');

  ll c = 0;
  for (int i=0; i<a.size(); ++i) {
    string bs = string(a[i], '1');
    for (int j=0; j<bs.size(); ++j) {
      int m = (int)(ans[max_length-1-j] - '0') + (int)(bs[bs.size()-1-j] - '0');
      ans[max_length-1-j] = (char)(((m+c)%10) + '0');
      if (m+c >= 10) c=1;
      else c=0;
    }
  }

  // for (int i=0; i<max_length; ++i) {
  //   for (int j=n-1; b[j].size()>=i; --j) {
  //     int m = (ans[i]-'0') + (b[i][j]-'0');
  //     ans[i] = (m+c)%10;
  //     if (m+c >= 10) c = 1;
  //     else c = 0;
  //   }
  // }

  cout << ans << endl;

  return 0;
}

