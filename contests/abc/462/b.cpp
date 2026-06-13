#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<vector<int>> people(n);
  for (int i=0; i<n; ++i) {
    int k; cin >> k;
    for (int j=0; j<k; ++j) {
      int a; cin >> a; a--;
      people[a].push_back(i+1);
    }
  }

  for (int i=0; i<n; ++i) {
    cout << people[i].size() << ' ';
    for (int j=0; j<people[i].size(); ++j) {
      if (j != 0) cout << ' ';
      cout << people[i][j];
    }
    cout << endl;
  }
  cout << endl;
  return 0;
}
