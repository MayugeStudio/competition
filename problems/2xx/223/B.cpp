#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string S;
int main() {
  cin >> S;
  vector<string> v(S.size());
  for (int i=0; i<S.size(); ++i) {
    char c = S[0];
    S.erase(0, 1);
    S += c;
    v[i] = S;
  }

  sort(v.begin(), v.end());

  cout << v[0] << endl;
  cout << v[v.size()-1] << endl;

  return 0;
}

