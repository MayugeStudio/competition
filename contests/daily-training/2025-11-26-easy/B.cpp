#include <iostream>
#include <string>
using namespace std;

int N;
string S[100];

int main() {
  cin >> N;
  int ans = 0;
  for (int i=0; i<N; ++i) {
    cin >> S[i];
  }
  
  for (int i=0; i<N; ++i) {
    if (S[i] == "Takahashi") ans++;
  }

  cout << ans << endl;
}
