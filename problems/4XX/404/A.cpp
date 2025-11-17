#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

string S;

int main() {
  unordered_map<char, int> m;
  for (int i=0; i<26; ++i) {
    m['a'+i] = 0;
  }
  cin >> S;
  

  for (int i=0; i<S.length(); ++i) {
    char c = S[i];
    m[c]++;
  }
  
  for (auto &[k, v]: m) {
    if (v == 0) {
      cout << k << endl;
      break;
    }
  }
  return 0;
}
