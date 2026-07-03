#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int f = 0;
  int a = 0;

  for (int i=0; i<n; ++i) {
    string s; cin >> s;
    if (s == "For") f += 1;
    else a += 1;
  }
  if (f > a) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

