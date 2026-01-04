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

int compute_happy(int n) {
  int w = 0;
  while (n != 0) {
    int t = n%10;
    n /= 10;

    w += t*t;
  }
  return w;
}

int main() {
  int n; cin >> n;
  map<int, bool> m;
  m[n] = true;

  while (n != 1) {
    int next = compute_happy(n);
    if (m[next]) {
      cout << "No" << endl;
      return 0;
    }
    m[next] = true;
    n = next;
  }
  cout << "Yes" << endl;

  return 0;
}

