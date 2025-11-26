#include <iostream>
#include <vector>
using namespace std;

int N, M;
int A[100];
vector<int> v;

bool all() {
  for (int i=0; i<M; ++i) {
    if (v[i] == 0) return false;
  }

  return true;
}

int main()
{
  cin >> N >> M;
  v.resize(M);
  for (int i=0; i<N; ++i) cin >> A[i];
  for (int i=0; i<N; ++i) v[A[i]-1]++;

  int ans = 0;

  while (all()) {
    v[A[N-1-ans]-1]--;
    ans++;
  }

  cout << ans << endl;
}

