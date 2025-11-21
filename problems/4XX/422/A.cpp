#include <iostream>
#include <string>
using namespace std;

string S;
int main() {
  cin >> S;
  int Stage = (int)(S[0] - '0');
  int World = (int)(S[2] - '0');
  
  if (World == 8) cout << Stage + 1 << "-" << 1;
  else cout << Stage << "-" << World + 1;

  cout << endl;
  return 0;
}
