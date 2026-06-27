#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

ll N;
ll M;
ll K;

int main() {
  cin >> N >> M >> K;
  vector<ll> H(N);
  vector<ll> B(M);
  for (ll i=0; i<N; ++i) {
    cin >> H[i];
  }
  for (ll i=0; i<M; ++i) {
    cin >> B[i];
  }

  sort(begin(H), end(H));
  sort(begin(B), end(B));

  ll acc = 0;
  
  ll hc = 0; 
  ll bc = 0;

  while (hc < N && bc < M) {
    if (H[hc] > B[bc]) {
      bc++;
    } else {
      bc++;
      hc++;
      acc++;
    }


    if (acc >= K) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  
  cout << "No" << endl;
  
  return 0;
}

