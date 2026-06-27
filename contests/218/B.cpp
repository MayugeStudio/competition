#include <iostream>
using namespace std;

int P[26];

int main() {
  for (int i=0; i<26; ++i) {
    cin >> P[i];
  }

  for (int i=0; i<26; ++i) {
    cout << (char)(P[i]-1 + 'a');
  }
  cout << endl;
  return 0;
}
