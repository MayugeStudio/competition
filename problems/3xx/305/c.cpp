#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int h, w; cin >> h >> w;
  vector<string> s(h);
  for (int i=0; i<h; ++i) {
    cin >> s[i];
  }

  vector<int> row_search(h);
  for (int i=0; i<h; ++i) {
    int cnt = 0;
    for (int j=0; j<w; ++j) {
      if (s[i][j] == '#') cnt++;
    }
    if (cnt == 0) cnt = 5000;
    row_search[i] = cnt;
  }

  vector<int> col_search(w);
  for (int j=0; j<w; ++j) {
    int cnt = 0;
    for (int i=0; i<h; ++i) {
      if (s[i][j] == '#') cnt++;
    }
    if (cnt == 0) cnt = 5000;
    col_search[j] = cnt;
  }

  int row_min = *min_element(row_search.begin(), row_search.end());
  int col_min = *min_element(col_search.begin(), col_search.end());

  auto ans_row = find(row_search.begin(), row_search.end(), row_min) - row_search.begin();
  auto ans_col = find(col_search.begin(), col_search.end(), col_min) - col_search.begin();

  cout << ans_row+1 << " " << ans_col+1 << endl;

  return 0;
}
