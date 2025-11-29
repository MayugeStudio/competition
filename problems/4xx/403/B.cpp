#include <iostream>
#include <string>
using namespace std;

string S, U;

int main() {
  cin >> S >> U;

  for (int l=0; l<S.length()-U.length()+1; ++l) {
    bool ok = true;
    for (int i=0; i<U.length(); ++i) {
      if (S[l+i] != '?' && S[l+i] != U[i]) {
        ok = false;
        break;
      }
    }

    if (ok) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  
  cout << "No" << endl;
  return 0;
}
