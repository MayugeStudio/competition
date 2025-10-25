#include <iostream>
using namespace std;


int main() {
  int N; cin >> N;
  int M; cin >> M;

  for (int i=0; i<N; ++i) {
    if (i < M) {
      cout << "OK\n";
    } else {
      cout << "Too Many Requests\n";
    }
  }
  return 0;
}
