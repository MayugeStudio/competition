#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int n;
vector<int> a;
vector<long long> s;
int main() {
  cin >> n;
  a.resize(n+1, 0);

  for (int i=0; i<n; ++i) cin >> a[i];


  s.resize(n+1, 0);
  long long sum = accumulate(a.begin(), a.end(), 0LL);
  s[0] = sum;
  for (int i=0; i<n; ++i) {
    s[i+1] = s[i] - a[i];
  }

  long long ans = 0;
  for (int i=0; i<n; ++i) {
    ans += a[i] * s[i+1];
  }

  cout << ans << endl;

  return 0;
}
