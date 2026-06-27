#include <iostream>
#include <string>
using namespace std;

string S;

int main() {
  cin >> S;

  for (int i=0; i<S.length(); ++i) {
    if (S[i] >= 'A' && S[i] <= 'Z') cout << S[i];
  }
  cout << endl;
  return 0;
}

