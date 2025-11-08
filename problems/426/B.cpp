#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
  string S; cin >> S;

  unordered_map<char, int> m;

  for (int i=0; i<S.length(); ++i) {
    m[S[i]]++;
  }

  for (auto& [key, val]: m) {
    if (val == 1) {
      cout << key << endl;
      return 0;
    }
  }
  return 0;
}

