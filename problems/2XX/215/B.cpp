#include <iostream>
using namespace std;

long long N;

int main() {
  cin >> N;

  long long c = 0;
  long long val = 1;
  for (long long i=0; i<=N; ++i) {
    if (val > N) {
      cout << i-1 << endl;
      return 0;
    }
    val *= 2;
  }
  return 0;
}
