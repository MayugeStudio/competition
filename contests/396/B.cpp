#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int Q;
vector<int> out;
stack<int> s;

void solve() {
  int type; int x;
  cin >> type;
  if (type == 1) {
    cin >> x;
    s.push(x);
  } else {
    x = s.top();
    s.pop();
    out.push_back(x);
  }
}

int main() {
  cin >> Q;
  for (int i=0; i<100; ++i) s.push(0);
  for (int i=0; i<Q; ++i) solve();

  for (int i=0; i<out.size(); ++i) {
    cout << out[i] << endl;
  }
}
