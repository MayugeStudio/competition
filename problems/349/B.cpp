#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string S; cin >> S;
  vector<int> acc(26);
  vector<int> ans(101);
  
  for (int i=0; i<S.length(); ++i) acc[S[i]-'a']++;

  for (int i=0; i<acc.size(); ++i) if (acc[i] != 0) ans[acc[i]]++;
  for (int i=0; i<ans.size(); ++i) {
    if (ans[i] != 0 && ans[i] != 2) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}

