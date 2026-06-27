#include <iostream>
#include <map>
using namespace std;

int n;
map<int, bool> m;
int main() {
  cin >> n;

  for (int i=1; i<=2*n+1; ++i) {
    m[i] = false;
  }

  while (true) {
    // takahashi
    int next = -1;
    for (int i=1; i<=2*n+1; ++i){
      if (!m[i]) {
        next = i;
        m[i] = true;
        break;
      }
    }
    if (next == -1) {
      break;
    } else {
      cout << next << endl;
    }

    // aoki
    int in; cin >> in;
    m[in] = true;
  }

  return 0;
}

