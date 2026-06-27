#include <iostream>
#include <string>
using namespace std;

string S;

int main() {
  cin >> S;
  int ans = 1;
  int cnt = 0;
  for (int left=0; left<S.length(); ++left) {
    for (int right=S.length()-1; right>=left; --right) {
      int tl = left;
      int tr = right;
      bool ispalin = true;
      while (tl <= tr) {
        if (S[tl] != S[tr]) {
          ispalin = false;
          break;
        }

        if (tl == tr) cnt++;
        else cnt += 2;
        tl++; tr--;
      }
      if (ispalin && cnt > ans) ans = cnt;
      cnt = 0;
    }
  }
  cout << ans << endl;

  return 0;
}

