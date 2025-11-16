#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;

int N;
vector<int> P;
vector<int> Q;


int main() {
  cin >> N;
  vector<int> P(N), Q(N);
  for (int i=0; i<N; ++i) cin >> P[i], P[i]--;
  for (int i=0; i<N; ++i) cin >> Q[i], Q[i]--;

  map<vector<int>, int> ord;
  int iter = 0;

  vector<int> v(N);
  for (int i=0; i<N; ++i) v[i] = i;

  do {
    ord[v] = iter++;
  } while (next_permutation(v.begin(), v.end()));

  cout << abs(ord[P] - ord[Q]) << endl;
}

