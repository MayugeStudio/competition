#include <iostream>
#include <vector>
using namespace std;
#define ll long long

ll n;
vector<ll> vec;

int main() {
  cin >> n;
  vec.resize(n);
  for (int i=0; i<n-1; ++i) {
    ll v1, v2;
    cin >> v1 >> v2;
    vec[v1-1]++;
    vec[v2-1]++;
  }

  bool ok = false;
  for (int i=0; i<n; ++i) {
    if (vec[i] != 1 && !ok) {
      ok = true;
    } else if (vec[i] != 1 && ok) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}
