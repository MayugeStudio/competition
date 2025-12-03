#include <iostream>
#include <string>
#include <map>
using namespace std;

string S;
map<char, int> m;

int factorial(int n) {
  if (n == 0) return 1;
  return n * factorial(n-1);
}

int main() {
  cin >> S;
  for (int i=0; i<S.size(); ++i) {
    char c = S[i];
    m[c]++;
  }

  int d = 1;
  for (auto [k, v]: m) {
    d *= factorial(v);
  }

  
  int ans = factorial(S.size()) / d;
  cout << ans << endl;

  return 0;
}
