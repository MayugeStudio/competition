#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <unordered_map>
using namespace std;


int N;
int X;
int Y;
int Z;
vector<pair<int, int>> A, B, AB;


int main() {
  cin >> N >> X >> Y >> Z;
  vector<int> ans(X+Y+Z);
  unordered_map<int, bool> m;
  A.resize(N);
  B.resize(N);
  AB.resize(N);
  
  for (int i=0; i<N; ++i) {
    int a, b; cin >> a >> b;
    A[i] = make_pair(a, i+1);
    B[i] = make_pair(b, i+1);
    AB[i] = make_pair(a + b, i+1);
    m[i+1] = 0;
  }

  auto f = [](auto a, auto b) { return a.first > b.first; };
  sort( A.begin(),  A.end(), f);
  sort( B.begin(),  B.end(), f);
  sort(AB.begin(), AB.end(), f);

  
  int math = 0;
  int eng = 0;
  int math_eng = 0;

  for (auto v: A) {
    if (math == X || ans.size() == N) break;
    if (m[v.second]) continue;
    m[v.second] = true;

    math++;
    ans.push_back(v.second);
  }

  for (auto v: B) {
    if (eng == X || ans.size() == N) break;
    if (m[v.second]) continue;
    m[v.second] = true;

    eng++;
    ans.push_back(v.second);
  }

  for (auto v: AB) {
    if (math_eng == X || ans.size() == N) break;
    if (m[v.second]) continue;
    m[v.second] = true;

    math_eng++;
    ans.push_back(v.second);
  }

  for (int i=0; i<ans.size(); ++i) cout << ans[i] << endl;

  return 0;
}
