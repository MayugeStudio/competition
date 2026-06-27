#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

string n;
int main() {
  cin >> n;
  sort(n.begin(), n.end());

  int ans = 0;
  do {
    for (int i=1; i<n.size(); ++i) {
      string a, b;
      for (int j=0; j<i; ++j) a += n[j];
      for (int j=i; j<n.size(); ++j) b += n[j];

      int ai = stoi(a);
      int bi = stoi(b);
      ans = max(ans, ai * bi);
    }
  } while(next_permutation(n.begin(), n.end()));
  cout << ans << endl;

  return 0;
}
