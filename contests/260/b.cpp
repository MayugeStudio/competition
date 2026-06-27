#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct score {
  int index;
  int math;
  int english;
};

bool math(score a, score b) {
  if (a.math == b.math) {
    return a.index < b.index;
  }
  return a.math > b.math;
}

bool english(score a, score b) {
  if (a.english == b.english) {
    return a.index < b.index;
  }
  return a.english > b.english;
}

bool sougou(score a, score b) {
  int a_score = a.english + a.math;
  int b_score = b.english + b.math;
  if (a_score == b_score) {
    return a.index < b.index;
  }
  return a_score > b_score;
}

bool f(score a, score b) {
  return a.index < b.index;
}

int main() {
  int n, x, y, z; cin >> n >> x >> y >> z;
  vector<score> a(n);
  for (int i=0; i<n; ++i) {
    a[i].index = i+1;
  }

  for (int i=0; i<n; ++i) {
    cin >> a[i].math;
  }

  for (int i=0; i<n; ++i) {
    cin >> a[i].english;
  }

  vector<score> ans;
  sort(a.begin(), a.end(), math);
  for (int i=0; i<x; ++i) {
    ans.push_back(a[i]);
  }
  a.erase(a.begin(), a.begin()+x);

  sort(a.begin(), a.end(), english);
  for (int i=0; i<y; ++i) {
    ans.push_back(a[i]);
  }
  a.erase(a.begin(), a.begin()+y);

  sort(a.begin(), a.end(), sougou);
  for (int i=0; i<z; ++i) {
    ans.push_back(a[i]);
  }
  a.erase(a.begin(), a.begin()+z);

  sort(ans.begin(), ans.end(), f);
  for (int i=0; i<ans.size(); ++i) {
    cout << ans[i].index << endl;
  }

  return 0;
}
