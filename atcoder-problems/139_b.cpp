#include <iostream>
using namespace std;

int main() {
  int A; cin >> A;
  int B; cin >> B;
  int i = 0;
  while ((A-1)*i+1 < B) {i++;}
  cout << i << endl;
  return 0;
}
