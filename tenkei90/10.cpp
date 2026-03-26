#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<pair<int, int>> students;
  for (int i=0; i<n; ++i) {
    int c, p; cin >> c >> p;
    students.push_back(make_pair(c, p));
  }

  int q; cin >> q;
  for (int i=0; i<q; ++i) {
    int l, r; cin >> l >> r;
    l--, r--;
    int s1 = 0;
    int s2 = 0;
    for (int j=l; j<=r; ++j) {
      auto student = students[j];
      if (student.first == 1) {
        s1 += student.second;
      } else {
        s2 += student.second;
      }
    }
    cout << s1 << " " << s2 << endl;
  }
  return 0;
}
