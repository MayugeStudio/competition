#include <iostream>
#include <string>
using namespace std;

string acgt = "ACGT";

int main() {
  string S; cin >> S;
  int N = 0;
  N = S.length();

  int ans = 0;
  for (int L=0; L<N; ++L) {
    for (int R=L; R<N; ++R) {
      int ok = 1;
      for (int x=L; x<R+1; ++x) {
        if (acgt.find(S[x]) == string::npos) ok = 0;
      }
      if (ok && R-L+1 > ans) {
        ans = R-L+1;
      }
    }
  }
  cout << ans << endl;
}

