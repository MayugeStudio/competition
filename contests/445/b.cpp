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
  int n; cin >> n;
  vector<string> s(n);
  int mlen = 0;
  for (int i=0; i<n; ++i) {
    cin >> s[i];
    if (s[i].size() > mlen) mlen = s[i].size();
  }

  for (int i=0; i<n; ++i) {
    string t = s[i];
    int l = t.size();
    
    int k = (mlen - l) / 2;

    for (int j=0; j<k; ++j) cout << ".";
    cout << t;
    for (int j=0; j<k; ++j) cout << ".";
    cout << endl;
  }

  return 0;
}

