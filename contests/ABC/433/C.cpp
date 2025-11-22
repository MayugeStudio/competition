#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
#define ll long long

string S;

int main() {
  cin >> S;

  ll ans = 0;

  ll i=0;
  while (i < S.length()) {
    char targetc = S[i];
    ll target_count = 0;
    // Count targets
    while (targetc == S[i]) {
      target_count++; i++;
    }

    // Count matching neighbors

    // neighbors index
    ll ni = 0;
    while (S[i+ni] == (char)(targetc+1) && ni < target_count) ni++;
    ans += ni;

  }
  cout << ans << endl;
  return 0;
}
