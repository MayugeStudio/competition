#include <iostream>
#include <string>
#include <vector>
using namespace std;

int length(string s, int n) {
  for (int i=0; i<s.size(); ++i) {
    if (s[i] == '0'+n) {
      return i;
    }
  }
  return -1;
}

int main() {
  int n; cin >> n;
  vector<string> vs(n);

  for (int i=0; i<n; ++i) cin >> vs[i];

  vector<vector<int>> mat(10, vector<int>(n));
  // すべての数字について
  for (int i=0; i<10; ++i) {
    for (int j=0; j<n; ++j) {
      mat[i][j] = length(vs[i], j+1);
    }
  }

  vector<int> arr(10, 0);
  for (int i=0; i<10; ++i) {
    for (int j=0; j<n; ++j) {
      arr[i] = 
    }
  }
  cout << res << endl;

  return 0;
}
