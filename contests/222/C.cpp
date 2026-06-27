#include <algorithm>
#include <iostream>
#include <string>
#include <tuple>
#include <vector>
using namespace std;

int n, m;
vector<string> a;
enum result { win, aiko, lose };

struct hito {
  int id;
  int score;
  string te;
};

bool comp(hito x, hito y) {
  if (x.score == y.score) {
    return x.id < y.id;
  }
  return x.score > y.score;
}

result janken(char x, char y) {
  if (x == 'G' && y == 'G') return aiko;
  else if (x == 'G' && y == 'C') return win;
  else if (x == 'G' && y == 'P') return lose;
  else if (x == 'C' && y == 'G') return lose;
  else if (x == 'C' && y == 'C') return aiko;
  else if (x == 'C' && y == 'P') return win;
  else if (x == 'P' && y == 'G') return win;
  else if (x == 'P' && y == 'C') return lose;
  else if (x == 'P' && y == 'P') return aiko;

  return aiko;
}

int main() {
  cin >> n >> m;
  a.resize(2*n);
  // tuple[score, id, janken no te]
  vector<hito> scores(2*n);

  for (int i=0; i<2*n; ++i) cin >> a[i];
  for (int i=0; i<2*n; ++i) scores[i] = hito{i+1, 0, a[i]};

  for (int i=0; i<m; ++i) {
    sort(scores.begin(), scores.end(), comp);

    for (int j=0; j<n; ++j) {
      int x = 2*j;
      int y = 2*j+1;
      result r = janken(scores[x].te[i], scores[y].te[i]);
      if (r == result::win) scores[x].score++;
      else if (r == result::lose) scores[y].score++;
    }
  }

  sort(scores.begin(), scores.end(), comp);

  for (auto x: scores) {
    cout << x.id << endl;
  }

  return 0;
}

