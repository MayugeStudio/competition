#include <iostream>
#include <string>

using namespace std;

string S, T;

int main() {
  cin >> S >> T;
  if (S == T) {
    cout << "Yes" << endl;
    return 0;
  }

  for (int i=0; i<S.length()-1; ++i) {
    string A = S;
    char t = A[i+1];
    A[i+1] = A[i];
    A[i] = t;
    if (A == T) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
