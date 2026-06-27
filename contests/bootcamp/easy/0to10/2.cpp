#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N; cin >> N;
  vector<int> X;
  for (int i=0; i<N; ++i) {
    int t; cin>>t;
    X.push_back(t);
  }

  int min_pos = *min_element(begin(X), end(X));
  int max_pos = *max_element(begin(X), end(X));

  vector<int> A;
  for (int point=min_pos; point<=max_pos; ++point) {
    int s = 0;
    for (int j=0; j<N; ++j) {
      s += (X[j]-point) * (X[j]-point);
    }
    A.push_back(s);
  }

  int min = *min_element(begin(A), end(A));
  cout << min << endl;
}
