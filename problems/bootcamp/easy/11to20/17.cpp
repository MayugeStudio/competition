#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int main() {
  int N; cin >> N;
  priority_queue<float, vector<float>, greater<float>> v;

  for (int i=0; i<N; ++i) {
    float t; cin >> t;
    v.push(t);
  }

  while (v.size() > 1) {
    const float a = v.top(); v.pop();
    const float b = v.top(); v.pop();
    float c = (a + b) / 2;
    v.push(c);
  }

  cout << v.top() << endl;
  return 0;
}
