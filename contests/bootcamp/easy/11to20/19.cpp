#include <iostream>
#include <unordered_map>
using namespace std;

int N, M, X;
int main() {
  cin >> N >> M >> X;
  unordered_map<int, int> m;
  for (int i=0; i<N; ++i) {
    m[i] = 0;
  }
  for (int i=0; i<M; ++i) {
    int temp = 0; cin >> temp;
    m[temp]++;
  }

  int ans = 0;

  int left_cost = 0;
  // search left
  for (int i=X;i<=N;++i) {
    if (m[i] == 1 && i != X && i != N) {
      left_cost++;
    }
  }
  int right_cost = 0;
  // search right
  for (int i=X; i>0; --i) {
    if (m[i] == 1 && i != X && i != N) {
      right_cost++;
    }
  }
  
  if (left_cost > right_cost) {
    cout << right_cost << endl;
  } else {
    cout << left_cost << endl;
  }
  return 0;
}

