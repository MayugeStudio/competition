#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N; cin >> N;
  vector<int> v(N);
  vector<int> rv(N);
  for (int i=0; i<N; ++i) {
    cin >> v[i];
    v[i] -= 1;
  }

  for (int i=0; i<N; ++i) {
    int value = v[i];
    rv[value] = i;
  }

  for (int i=0; i<N; ++i) {
    cout << rv[i]+1 << " ";
  }

  cout << endl;
}

