#include <iostream>
#include <string>
using namespace std;


int n; string s;
int main() {
  cin >> n >> s;

  char prev = s[0] == 'M' ? 'F' : 'M';
  for (int i=0; i<n; ++i) {
    if (s[i] == prev) {
      cout << "No" << endl;
      return 0;
    }
    prev = s[i];
  }
  cout << "Yes" << endl;
  return 0;
}
