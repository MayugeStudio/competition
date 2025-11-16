#include <iostream>
#include <set>
#include <vector>
using namespace std;

int N;
int main() {
  cin >> N;
  vector<int> v(N);
  for (int i=0; i<N; ++i) cin >> v[i];
  set<int> s(v.begin(), v.end());
  cout << s.size() << endl;
  
  return 0;
}
