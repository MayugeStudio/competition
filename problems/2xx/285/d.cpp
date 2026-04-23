#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <queue>
using namespace std;

map<string, vector<string>> g;
map<string, bool> visited;
map<string, bool> memo;


bool bfs(string start) {
  queue<string> que;
  que.push(start);

  while (!que.empty()) {
    string x = que.front(); que.pop();
    visited[x] = true;
    for (string v: g[x]) {
      memo[v] = true;
      if (visited[v]) return true;
      que.push(v);
    }
  }
  return false;
}

int main() {
  int n; cin >> n;

  vector<string> s(n), t(n);
  for (int i=0; i<n; ++i) {
    cin >> s[i] >> t[i];
    g[s[i]].push_back(t[i]);
  }

  for (int i=0; i<n; ++i) {
    string start = s[i];
    if (memo[start]) continue;

    if (bfs(start)) {
      cout << "No" << endl;
      return 0;
    }

    visited.clear();
  }

  cout << "Yes" << endl;

  return 0;
}
