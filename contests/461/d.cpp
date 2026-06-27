#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  int h, w, k; cin >> h >> w >> k;
  vector<string> ss(h);
  for (int i=0; i<h; ++i) cin >> ss[i];

  vector<vector<int>> grid(h, vector<int>(w, 0));
  for (int i=0; i<h; ++i) {
    for (int j=0; j<w; ++j) {
      if (ss[i][j] == '1') grid[i][j] = 1;
    }
  }

  vector<int> hacc(h, 0);
  vector<int> wacc(w, 0);

  for (int i=0; i<h; ++i) {
    for (int j=0; j<w; ++j) {
      hacc[i] += grid[i][j];
    }
  }
  for (int i=0; i<w; ++i) {
    for (int j=0; j<h; ++j) {
      wacc[i] += grid[j][i];
    }
  }

  int ans = 0;
  for (int htop=0; htop<h; ++htop) {
    for (int hbottom=htop+1; hbottom<=h; ++ hbottom) {
      int sum = 0;
      for (int i=htop; i<hbottom; ++i) {
        sum += hacc[i];
      }
      // cout << htop << ',' << hbottom << ',' << sum << endl;

      int tsum = sum;
      for (int wleft=0; wleft<w; ++wleft) {
        for (int wright=wleft; wright<=w; ++wright) {
          for (int i=0; i<wleft; ++i) {
            for (int j=htop; j<hbottom; ++j) {
              sum -= grid[j][i];
            }
          }

          for (int i=wright; i<w; ++i) {
            for (int j=htop; j<hbottom; ++j) {
              sum -= grid[j][i];
            }
          }

          // cout << "    " << wleft << ',' << wright << ',' << sum << endl;
          if (sum == k) ans += 1;
          sum = tsum;
        }
      }
      // cout << '\n' << endl;
    }
  }
  cout << ans << endl;

  return 0;
}
