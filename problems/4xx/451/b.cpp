#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<int> konki(m);
  vector<int> raiki(m);
  for (int i=0; i<n; ++i) {
    int a, b; cin >> a >> b;
    a--, b--;
    konki[a] += 1;
    raiki[b] += 1;
  }
  for (int i=0; i<m; ++i) {
    cout << raiki[i] - konki[i] << endl;
  }
  return 0;
}
