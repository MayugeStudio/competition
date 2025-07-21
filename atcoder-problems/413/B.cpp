#include <iostream>
#include <string>
#include <set>

using namespace std;

int N;
string S[100];
set<string> R;

int main() {
  cin >> N;
  for (int i=0;i<N;++i) {
    cin >> S[i];
  }

  for (int a=0;a<N;++a) {
    for (int b=0;b<N;++b) {
      if (a == b) continue;
        R.insert(S[a] + S[b]);
    }
  }

  cout << R.size() << endl;
}

