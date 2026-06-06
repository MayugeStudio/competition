#include <algorithm>
#include <map>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;
using ll = long long;

struct jewel { ll color, value, idx; bool chosen; };
vector<jewel> storage;

bool greater_jw(int a, int b) {
  return storage[a].value > storage[b].value;
}

int main() {
  ll n, k, m; cin >> n >> k >> m;
  storage.reserve(n);
  // 宝石全体の配列
  vector<int> jewels(n);
  // 色ごとのデータを保持する
  map<int, vector<int>> bycolor;
  for (int i=0; i<n; ++i) {
    ll c, v; cin >> c >> v;
    storage[i] = jewel{ c, v, i, false };
    jewels[i] = i;
    bycolor[c].push_back(i);
  }

  ll cnt = 0;
  ll sum = 0;
  // 先に、色を選び切る
  for (auto &e: bycolor) sort(e.second.begin(), e.second.end(), greater_jw);

  // 各色の中で一番大きい奴らを集めた配列
  vector<int> colors;
  for (auto &e: bycolor) colors.push_back(storage[e.second.front()].idx);
  sort(colors.begin(), colors.end(), greater_jw);
  // for (int i=0; i<colors.size(); ++i) {
  //   cout << storage[colors[i]].idx << ' ' << storage[colors[i]].color << endl;
  // }

  for (int i=0; i<m; ++i) {
    storage[colors[i]].chosen = true;
    sum += storage[colors[i]].value;
    cnt += 1;
    // cout << storage[colors[i]].value << ' ' << storage[colors[i]].idx << endl;
  }
  // cout << "sum:" << sum << endl;
  // cout << "cnt:" << cnt << endl;

  // 残りを決めてく
  sort(jewels.begin(), jewels.end(), greater_jw);
  int index = 0;
  while (cnt < k) {
    if (storage[jewels[index]].chosen) {
      index += 1;
      continue;
    }
    jewel &jw = storage[jewels[index]];
    jw.chosen = true;
    sum += jw.value;
    cnt += 1;
    index += 1;
  }

  cout << sum << endl;

  return 0;
}
