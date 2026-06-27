#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int N, M;
string S, T;

int main() {
  cin >> N >> M;
  cin >> S >> T;

  string RS;
  string RT;
  reverse_copy(S.begin(), S.end(), back_inserter(RS));
  reverse_copy(T.begin(), T.end(), back_inserter(RT));

  bool prefix = true;
  bool suffix = true;

  int ans = 0;
  for (int i=0; i<N; ++i) {
    if (T[i] != S[i]) {
      prefix = false;
      break;
    }
  }

  for (int i=0; i<N; ++i) {
    if (RT[i] != RS[i]) {
      suffix = false;
      break;
    }
  }

  if (prefix && suffix) cout << 0;
  else if (prefix && !suffix) cout << 1;
  else if (!prefix && suffix) cout << 2;
  else cout << 3;
  cout << endl;

  return 0;
}
