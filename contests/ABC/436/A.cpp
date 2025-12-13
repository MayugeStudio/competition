// Headers
#include <bits/stdc++.h>
using namespace std;

// Type definitions
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<long long, long long>;

// Macros
#define rep(i, x, limit) for (int i=(int)x; (int)i<limit; ++i)
#define all(x)  x.begin(),  x.end()
#define rall(x) x.rbegin(), x.rend()
#define Yes cout << "Yes" << endl
#define No  cout << "No" << endl
#define YES cout << "YES" << endl
#define NO  cout << "NO" << endl

int n;
string s;

int main() {
  cin >> n >> s;
  rep(i, 0, n-s.size()) {
    cout << 'o';
  }
  cout << s << endl;
  return 0;
}

