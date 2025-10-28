#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N; cin >> N;
  vector<int> warerukazu;

  for (int i=0; i<N; ++i) {
    int t; cin >> t;
    int c = 0;
    while (t % 2 == 0) {
      t = t>>1;
      c++;
    }
    warerukazu.push_back(c);
  }

  int m = *min_element(begin(warerukazu), end(warerukazu));

  cout << m << endl;

  return 0;
}

