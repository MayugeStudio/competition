#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
  int x, y; cin >> x >> y;
  if (x/16== y/9 && x%16==0 && y%9==0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
