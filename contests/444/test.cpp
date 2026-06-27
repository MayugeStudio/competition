#include <iostream>
using namespace std;
int main() {
  string s1 = "1111";
  string s2 = "2229";
  string ans = "0000";

  int c = 0;
  for (int i=0; i<4; ++i) {
    int m = (char)(s1[i]-'0') + (char)(s2[i]-'0');
    cout << "m:" << m << ", c:" << c << endl;
    ans[i] = (char)(((m+c)%10) + '0');
    if (m+c >= 10) c = 1;
    else c = 0;
  }
  cout << ans << endl;
  return 0;
}
