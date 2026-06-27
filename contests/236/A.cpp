#include <iostream>
#include <string>
using namespace std;
string S;
int a, b;

int main() {
  cin >> S;
  cin >> a >> b;
  char t = S[a-1];
  S[a-1] = S[b-1];
  S[b-1] = t;
  cout << S << endl;
  return 0;
}
