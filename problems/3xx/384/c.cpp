#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;


int a, b, c, d, e;
bool comp(string s1, string s2) {
  int v1 = 0, v2 = 0;
  for (int i=0; i<s1.size(); ++i) {
    if (s1[i] == 'A') v1 += a;
    if (s1[i] == 'B') v1 += b;
    if (s1[i] == 'C') v1 += c;
    if (s1[i] == 'D') v1 += d;
    if (s1[i] == 'E') v1 += e;
  }
  for (int i=0; i<s2.size(); ++i) {
    if (s2[i] == 'A') v2 += a;
    if (s2[i] == 'B') v2 += b;
    if (s2[i] == 'C') v2 += c;
    if (s2[i] == 'D') v2 += d;
    if (s2[i] == 'E') v2 += e;
  }

  if (v1 == v2) return s1 < s2;

  return v1 > v2;
}

vector<string> v;
int main() {
  cin >> a >> b >> c >> d >> e;
  for (int ia=0; ia<2; ++ia) {
    for (int ib=0; ib<2; ++ib) {
      for (int ic=0; ic<2; ++ic) {
        for (int id=0; id<2; ++id) {
          for (int ie=0; ie<2; ++ie) {
            string s;
            if (ia==1 &&
                ia==ib &&
                ib==ic &&
                ic==id &&
                id == ie) {
              continue;
            }
            if (ia==0) s += 'A';
            if (ib==0) s += 'B';
            if (ic==0) s += 'C';
            if (id==0) s += 'D';
            if (ie==0) s += 'E';
            v.push_back(s);
          }
        }
      }
    }
  }

  sort(v.begin(), v.end(), comp);

  for (int i=0; i<v.size(); ++i) {
    cout << v[i] << endl;
  }

  return 0;
}
