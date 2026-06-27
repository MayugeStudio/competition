#include <iostream>
#include <string>
using namespace std;

string s;
int main() {
  cin >> s;
  int r = s.find('R');
  int m = s.find('M');
  if (r < m) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
