#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> p(n);
  for (int i=1; i<n; ++i) cin >> p[i];

  int cur = p[n-1];
  int gen = 1;
  while (cur != 1) {
    cur = p[cur-1];
    gen += 1;
  }

  cout << gen << endl;

  return 0;
}
