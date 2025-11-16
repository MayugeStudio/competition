#include <iostream>
#include <string>
using namespace std;

string S;

int main() {
  cin >> S;

  for (int i=0; i<S.length(); ++i) {
    if (i == S.length()/2) continue;
    cout << S[i];
  }
  cout << endl;
  return 0;
}
