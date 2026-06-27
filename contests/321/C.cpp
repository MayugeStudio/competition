#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  vector<long long> vals;
  for (int bit = 0; bit < (1<<10); ++bit) {
    long long val = 0;

    for (int v=9; v>=0; --v) {
      if (bit & (1<<v)) {
        val = val * 10 + v;
      }
    }

    if (val > 0) vals.push_back(val);
  }

  sort(vals.begin(), vals.end());

  long long k;
  cin >> k;
  cout << vals[k-1] << endl;

  return 0;
}

