#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int T, N;
vector<int> A;

#define rep(i, n) for(int i=0;i<n;++i)

void solve() {
  sort(A.begin(), A.end());
  int i = 0;
  if (A.size() == 2) {
    if (A[0] == A[1]) {
      A.erase(A.begin()+1);
      A[0] += 1;
    }
  }
  while (i != A.size()-2) {
    if (A[i] == A[i+1]) {
      A.erase(A.begin()+i);
      A[i] += 1;
      i = 0;
    }
    i+=1;
  }
  cout << N << endl;
}

int main() {
  cin >> T;
  rep(i, T) {
    cin >> N;
    rep(n, N) {
      A.clear();
      int i;
      cin >> i;
      A.push_back(i);
      solve();
    }
  }
}
