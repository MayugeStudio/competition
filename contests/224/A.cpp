#include <iostream>
#include <string>
using namespace std;

string S;

int main() {
  cin >> S;

  if (S[S.length()-2] == 'e' && S[S.length()-1] == 'r') cout << "er" << endl;
  else cout << "ist" << endl;

  return 0;
}
