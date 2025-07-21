#include <iostream>
using namespace std;

int N, M;
int sum;
int a;

int main() {
  cin >> N >> M;
  for (int i=0;i<N;i++) {
    cin >> a;
    sum += a;
  }
  if (sum <= M) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
