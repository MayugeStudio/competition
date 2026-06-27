#include <iostream>
#include <string>

using namespace std;

int main() {
  int n; cin >> n;
  n--;
  string s = "HelloWorld";

  for (int i=0;i<10; ++i) {
    if (i == n) continue;
    cout << s[i];
  }
  cout << endl;
  return 0;
}
