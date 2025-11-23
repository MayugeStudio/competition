#include <iostream>
#include <string>
using namespace std;

string S;

int main() {
  cin >> S;
  int current = (int)(S[0] - '0');
  for (int i=1; i<S.length(); ++i) {
    int next = (int)(S[i] - '0');
    if (current <= next) {
      cout << "No" << endl;
      return 0;
    }
    current = next;
  }
  cout << "Yes" << endl;

  return 0;
}

