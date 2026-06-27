#include <iostream>
#include <string>
using namespace std;

string N;

int main() {
  cin >> N;
  int diff = 4 - N.length();
  for (int i=0; i<diff; ++i) cout << "0";
  cout << N << endl;
}
