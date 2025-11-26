#include <iostream>
#include <string>
using namespace std;

string S;

int main() {
  cin >> S;

  int ans = 0;
  int prev = 'o';
  for (int i=1; i<=S.length(); ++i) {
    char c = S[i-1];
    if (prev == 'o' && c == 'o') {
      ans++;
    } else if (prev == 'i' && c == 'i') {
      ans++;
    } else {
      prev = S[i-1];
    }
  }
  if ((S.length() + ans) % 2 == 1) ans ++;

  cout << ans << endl;
}
