#include <iostream>

using namespace std;

int N, L, R;
char S[100];

int main() {
  cin >> N >> L >> R;
  L --;
  R --;
  for (int i=0;i<N;++i) {
    cin >> S[i];
  }

  for (int i=L;i<R;++i) {
    if (S[i] != 'o') {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
