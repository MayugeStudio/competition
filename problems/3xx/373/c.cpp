#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> a;
vector<int> b;
int main() {
  cin >> n;
  a.resize(n);
  b.resize(n);
  for (int i=0; i<n; ++i) cin >> a[i];
  for (int i=0; i<n; ++i) cin >> b[i];

  int ma = *max_element(a.begin(), a.end());
  int mb = *max_element(b.begin(), b.end());

  cout << ma + mb << endl;

  return 0;
}
