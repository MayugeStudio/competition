#include <iostream>
#include <algorithm>
using namespace std;

int N;
int P[100];
int R[100];

int main() {
  cin >> N;
  for (int i=0; i<N; ++i) cin >> P[i];

  int rank = 1;
  while (rank <= N) {
    int cnt = 0;
    int m = *max_element(begin(P), end(P));
    for (int i=0; i<N; ++i) {
      if (m == P[i]) {
        R[i] = rank;
        P[i] = -1;
        cnt++;
      }
    }
    rank += cnt;
  }

  for (int i=0; i<N; ++i) cout << R[i] << endl;
}
