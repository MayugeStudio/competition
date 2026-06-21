#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
  int n; char c;
  cin >> n >> c;
  vector<string> ss(n);
  for (int i=0; i<n; ++i) cin >> ss[i];

  int idx = (int)(c - 'A');

  for (int i=0; i<n; ++i) {
    if (ss[i][idx] == 'o') {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;

  return 0;
}
