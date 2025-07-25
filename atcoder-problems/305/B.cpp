#include <iostream>
#include <math.h>

using namespace std;

char p, q;

int length[6] = { 3, 1, 4, 1,  5,  9 };
int acc[6]    = { 3, 4, 8, 9, 14, 23 };

int main() {
  cin >> p >> q;
  int pn = p - 'A';
  int qn = q - 'A';
  int left=min(pn, qn);
  int right=max(pn, qn);
  int s = 0;

  for (int i=left;i<right;++i) {
    s += length[i];
  }

  cout << s << endl;
}
