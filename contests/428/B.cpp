#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
  int N, K;
  string S;
  cin >> N >> K;
  cin >> S;

  map<string, int> umap;

  for (int i=0; i<N-K+1; ++i) {
    string t = S.substr(i, K);
    umap[t]++;
  }

  int vmax = 0;
  for (auto &[key, val]: umap) {
    vmax = max(vmax, val);
  }

  vector<string> vs;
  for (auto &[key, val] : umap) {
    if (val == vmax) vs.push_back(key);
  }

  cout << vmax << endl;
  for (int i=0; i<vs.size(); ++i) {
    if (i > 0) cout << " ";
    cout << vs[i];
  }
  cout << endl;

  return 0;
}

