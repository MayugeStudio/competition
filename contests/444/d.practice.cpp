#include <iostream>
#include <vector>
#include <stack>
using namespace std;

const int N = 3 * 10e5;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; ++i) cin >> a[i];
  const int M = 200010;
  vector<int> c(M, 0);
  for (int i=0; i<n; ++i) c[a[i]]++;

  vector<int> d(M);
  int rem = n;
  for (int i=0; i<M; ++i) {
    rem -= c[i];
    d[i] = rem;
  }

  int carry = 0;
  for (int i=0; i<M-1; ++i) {
    d[i] += carry;
    carry = d[i] / 10;
    d[i] %= 10;
  }

  while (d.back() == 0) d.pop_back();
  reverse(d.begin(), d.end());
  for (int x: d) cout << x;
  cout << endl;


  return 0;
}
