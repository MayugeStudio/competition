#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

#define ll long long

int N;

int main() {
  cin >> N;
  vector<int> W(N);
  vector<ll> H(N);
  vector<ll> B(N);
  for (int i=0; i<N; ++i) {
    cin >> W[i] >> H[i] >> B[i];
  }

  vector<int> w_idx(W.size());
  iota(w_idx.begin(), w_idx.end(), 0);
  sort(w_idx.begin(), w_idx.end(), [&](int i, int j) {
      return W[i] > W[j];
  });
  vector<int> sortedH(N);
  vector<int> sortedB(N);
  for (int i=0; i<w_idx.size(); ++i) {
    sortedH[i] = H[w_idx[i]];
    sortedB[i] = B[w_idx[i]];
  }
  
  ll ans = 0;

  for (int b=0; b<N; ++b) {
    ll body = sortedB[b];
    for (int i=b+1; i<N; ++i) {
      ll head = sortedH[i];
      // つけることができるかどうか
      if (body >= head) {
        if (body+head > ans) {
          ans = body + head;
          break;
        }
      }
    }
  }
  cout << ans << endl;
}
