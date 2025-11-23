#include <iostream>
#include <string>
using namespace std;

string S;

int main() {
  cin >> S;
  for (int i=1; i<=S.length(); ++i) {
    if (i%2 == 1) continue;
    if (S[i-1] == '1') {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}
