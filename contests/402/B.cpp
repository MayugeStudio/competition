#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue<int> q;
  int Q; cin >> Q;

  for (int i=0; i<Q; ++i) {
    int n; cin >> n;
    if (n == 1) {
      int x; cin >> x;
      q.push(x);
    } else {
      cout << q.front() << endl;
      q.pop();
    }
  }

  return 0;
}
