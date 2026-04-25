#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <map>
using namespace std;

int main() {
  int N, Q; cin >> N >> Q;
  vector<stack<int>> sts(N);
  vector<int> cs(Q);
  vector<int> ps(Q);

  for (int i=0; i<Q; ++i) {
    cin >> cs[i] >> ps[i];
    cs[i]--, ps[i]--;
  }

  map<int, int> m;
  for (int i=0; i<N; ++i) {
    sts[i].push(i);
    m[i] = i;
  }


  for (int i=0; i<Q; ++i) {
    // (1)
    int cp = m[cs[i]];

    // (2)
    int pp = m[ps[i]];

    // (3)
    stack<int> buf;
    while (!sts[cp].empty()) {
      int top = sts[cp].top(); sts[cp].pop();
      buf.push(top);
      // cout << "Picked " << top+1 << " up from " << cp+1 << endl;
      if (top == cs[i]) break; // c[i]をぶちこんだあと抜ける
    }

    // (4)
    while (!buf.empty()) {
      int top = buf.top(); buf.pop();
      sts[pp].push(top);
      // cout << "Pushed " << top+1 << " to " << pp+1 << endl;
      m[top] = pp;
    }
    // cout << "----------" << endl;
  }

  for (int i=0; i<N; ++i) {
    if (i != 0) cout << " ";
    cout << sts[i].size();
  }
  cout << endl;


  return 0;
}
