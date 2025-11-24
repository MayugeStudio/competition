#include <iostream>
using namespace std;

int N;

int main() {
  cin >> N;

  if (N >= 212) cout << 8;
  else if (N >= 126) cout << 6;
  else cout << 4;

  cout << endl;
  
  return 0;
}
