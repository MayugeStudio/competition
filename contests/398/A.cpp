#include <iostream>
#include <string>

using namespace std;

int N;
string S;

int main() {
  cin >> N;
  for (int i=0; i<N; ++i) S += '-';
  if (N % 2 == 0) {
    S[N/2] = '=';
    S[N/2-1] = '=';
  } else {
    S[N/2] = '=';
  }

  cout << S << endl;
}

