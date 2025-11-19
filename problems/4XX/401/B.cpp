#include <iostream>
using namespace std;

int N;
string S[100];

int main() {
  cin >> N;
  int ans = 0;
  bool islogin = false;
  for (int i=0; i<N; ++i) cin >> S[i];
  for (int i=0; i<N; ++i) {
    if (S[i] == "login") {
      islogin = true;
    } else if (S[i] == "logout") {
      islogin = false;
    } else if (S[i] == "public") {
    } else if (S[i] == "private") {
      if (!islogin) ans++;
    }
  }
  cout << ans << endl;
}
