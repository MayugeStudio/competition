#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int n, m;
void print(vector<int> &a) {
  for_each(a.begin(), a.end(), [](int x) { cout << x << " "; });
  cout << "\n";
}

void dfs(vector<int> &a) {
  int start = 1;
  if (a.size() == n) {
    print(a);
    return;
  } else if (a.size() != 0) {
    start = a[a.size() - 1] + 1;
  }

  for (int i = start; i <= m; ++i) {
    vector<int> b = vector<int>(a.begin(), a.end());
    b.push_back(i);
    dfs(b);
  }
}

int main() {
  cin >> n >> m;

  vector<int> a;
  dfs(a);

  return 0;
}
