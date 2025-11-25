#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


int N;

int main() {
  cin >> N;
  unordered_map<string, int> m;

  for (int i=0; i<N; ++i) {
    string t1; string t2; cin >> t1 >> t2;
    m[t1+"|"+t2]++;
  }

  for (auto [name, count]: m) {
    if (count > 1) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
