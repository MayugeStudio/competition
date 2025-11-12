#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  int N; cin >> N;
  vector<string> v(N);
  for (int i=0; i<N; ++i) {
    cin >> v[i];
  }
  int X; string Y;
  cin >> X >> Y;

  if (v[X-1] == Y) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
