#include <iostream>
using namespace std;

int main() {
  int A; cin >> A;
  int B; cin >> B;
  int C; cin >> C;
  int D; cin >> D;


  if (C >= A) {
    if (D >= B) {
      cout << "No" << endl;
      return 0;
    } else {
      cout << "Yes" << endl;
      return 0;
    }
  }
  
  cout << "No" << endl;
  return 0;
}
