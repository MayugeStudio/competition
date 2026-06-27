#include <iostream>
#include <vector>
using namespace std;

int main() {
  long long h, w; cin >> h >> w;

  vector<vector<long long>> a(h, vector<long long>(w));
  vector<vector<long long>> b(w, vector<long long>(h));
  
  for (int r=0; r<h; ++r) {
    for (int c=0; c<w; ++c) {
      cin >> a[r][c];
    }
  }

  for (int c=0; c<w; ++c) {
    for (int r=0; r<h; ++r) {
      cout << a[r][c] << " ";
    }
    cout << endl;
  }

  return 0;
}
