#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <set>
#include <algorithm>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<string> v(N);
  for (int i=0; i<N; ++i) {
    cin >> v[i];
  }

  vector<int> res(N);
  for (int k=0; k<M; ++k) {
    int score = 0;
    for (int i=0; i<N; ++i) {
      if (v[i][k] == '1') score++;
    }
    if (score == N) {
      for (int i=0; i<N; ++i) res[i]++;
    } else if (score > N/2) {
      for (int i=0; i<N; ++i) {
        if (v[i][k] == '0') res[i]++;
      }
    } else {
      for (int i=0; i<N; ++i) {
        if (v[i][k] == '1') res[i]++;
      }
    }
  }
  
  int max = *max_element(begin(res), end(res));
  for (int i=0; i<N; ++i) {
    if (res[i] == max)  {
      cout << i+1 << " ";
    }
  }
}
