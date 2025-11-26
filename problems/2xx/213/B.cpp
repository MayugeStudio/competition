#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
 
int N;
// number, score
vector<pair<int, int>> A;
int main() {
  cin >> N;
  A.resize(N);
  
  for (int i=0; i<N; ++i) {
    int t; cin >> t;
    A[i] = make_pair(i+1, t);
  }

  auto cmp = [](auto &x, auto &y) -> bool {
    return x.second > y.second;
  };

  sort(A.begin(), A.end(), cmp);

  cout << A[1].first << endl;

  return 0;

}
