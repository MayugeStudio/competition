#include <iostream>
using namespace std;

int main() {
  int A; cin >> A;
  int B; cin >> B;
  int C; cin >> C;
  int X; cin >> X;

  int ans = 0;

  for (int i500=0; i500<=A; ++i500) {
    for (int i100=0; i100<=B; ++i100) {
      for (int i50=0; i50<=C; ++i50) {
        if (i500*500+i100*100+i50*50 == X) {
          ans++;
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}
