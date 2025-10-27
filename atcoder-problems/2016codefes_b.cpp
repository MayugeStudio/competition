#include <iostream>
#include <string>
using namespace std;

int main() {
  int N; cin >> N;
  int A; cin >> A;
  int B; cin >> B;

  // a: japan
  // b: foreign
  // c: others

  int acc = 0;
  int bs = 0;
  
  for (int i=0; i<N; ++i) {
    char s; cin >> s;

    if (s == 'a') {
      if (acc < A+B) {
        cout << "Yes" << endl;
        acc++;
      } else {
        cout << "No" << endl;
      }

    } else if (s == 'b') {
      if (acc < A+B && bs < B) {
        cout << "Yes" << endl;
        acc++;
        bs++;
      } else {
        cout << "No" << endl;
      }

    } else if (s == 'c') {
      cout << "No" << endl;
    }
  }
}
