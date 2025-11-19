#include <iostream>
using namespace std;

int R, X;

int main() {
  cin >> R >> X;

  if (X == 1) {
    if (R >= 1600 && R <= 2999) cout << "Yes";
    else cout << "No";
  } else {
    if (R >= 1200 && R <= 2399) cout << "Yes";
    else cout << "No";
  }
  cout << '\n';
}

