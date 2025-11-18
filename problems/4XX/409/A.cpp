#include <iostream>
using namespace std;
int N;
char T[100], A[100];

int main() {
  cin >> N;
  for (int i=0; i<N; ++i) cin >> T[i];
  for (int i=0; i<N; ++i) cin >> A[i];

  for (int i=0; i<N; ++i) {
    if (T[i] == 'o' && A[i] == 'o') {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
