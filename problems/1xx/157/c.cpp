#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<map<int, int>> d(n);
  for (int i=0; i<m; ++i) {
    int s, c; cin >> s >> c;
    s--;
    d[s][c]++;
  }

  // 先頭が0はNG
  for (auto e: d[0]) {
    if (e.first == 0) {
      cout << -1 << endl;
      return 0;
    }
  }

  // 複数の数字が同じインデックスにあってもダメ
  for (int i=0; i<d.size(); ++i) {
    if (d[i].size() > 1) {
      cout << -1 << endl;
      return 0;
    }
  }

  // 文字を生成
  for (int i=0; i<d.size(); ++i) {
    if (d[i].size() >= 1) cout << d[i].begin()->first; 
    else cout << 0;
  }
  cout << endl;

  return 0;
}

