#include <iostream>
#include <vector>
#include <map>
#include <utility>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> A(n);
  for (int i=0; i<n; ++i) cin >> A[i];

  //       pair<index, count>
  map<int, int> m;
  m[1] = 0;

  for (int i=0; i<n; ++i) {
    int a = A[i];
    int count = m[a];
    m[2*(i+1)] = count+1;
    m[2*(i+1)+1] = count+1;
  }

  for (int i=1; i<=2*n+1; ++i) {
    cout << m[i] << endl;
  }

  return 0;
}
