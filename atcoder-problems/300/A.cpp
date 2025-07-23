#include <iostream>

using namespace std;

int N, A, B, C;


int main() {
  cin >> N >> A >> B;

  int S = A + B;

  for (int i=0;i<N;++i) {
    int n = i+1;
    cin >> C;
    if (C == S) {
      cout << n << endl;
      return 0;
    }
  }
}
