#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;

int main() {
  int n; cin >> n;
  int m; cin >> m;
  vector<int> a(n), d(n), b(n);
  map<int, vector<int>> days;
  map<int, int> colors;

  for (int i=0; i<n; ++i) {
    cin >> a[i] >> d[i] >> b[i]; 
    days[d[i]].push_back(i);
    colors[a[i]] += 1;
  }

  for (int i=1; i<=m; ++i) {
    for (int e : days[i]) {
      colors[a[e]] -= 1;
      colors[b[e]] += 1;
      if (colors[a[e]] <= 0) colors.erase(a[e]);
    }
    cout << colors.size() << endl;
  }

  return 0;
}
