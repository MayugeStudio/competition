#include <iostream>
#include <string>
using namespace std;

int n;
int main() {
  cin >> n;
  string s;
  if (n >= 42) {
    s = to_string(n+1);
  } else {
    s = to_string(n);
  }
  cout << "AGC";
  for (int i=0; i<3-s.size(); ++i) cout << "0";
  cout << s << endl;
  return 0;
}

