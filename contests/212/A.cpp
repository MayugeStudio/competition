#include <iostream>
using namespace std;

int A, B;

int main() {
  cin >> A >> B;

  if (A == 0) cout << "Silver" << endl; 
  else if (B == 0) cout << "Gold" << endl;
  else cout << "Alloy" << endl;
}
