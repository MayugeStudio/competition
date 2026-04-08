#include <iostream>
#include <queue>
#include <map>
#include <string>
using namespace std;

int main() {
  string s; cin >> s;
  queue<string> que;
  map<string, int> dp;

  que.push(s);
  dp[s] = 1;

  while (!que.empty()) {
    string prev = que.front(); que.pop();
    if (prev == "atcoder") break;
    int prev_value = dp[prev];
    for (int i=0; i<6; ++i) {
      string next = prev;
      swap(next[i], next[i+1]);
      if (dp[next] == 0) {
        dp[next] = prev_value + 1;
        que.push(next);
      }
    }
  }
  cout << dp["atcoder"]-1 << endl;

  return 0;
}
