#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N; cin >> N;
  int M; cin >> M;
  int C; cin >> C;
  vector<int> B;
  for (int i=0; i<M; ++i) {
    int t; cin >> t;
    B.push_back(t);
  }
  
  int ans = 0;

  for (int i=0; i<N; ++i) {
    int temp = 0;
    for (int j=0; j<M; ++j) {
      int a; cin >> a;
      temp += a * B[j];
    }

    if (temp + C > 0) ans++;
  }

  cout << ans << endl;
}
