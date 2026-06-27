#include <iostream>
#include <string>
using namespace std;

int N;
char c[100];
long long l[100];
long long sum;
#define S "Too Long"

int main() {
  ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
  string R = "";
  cin >> N;
  for (int i=0;i<N;++i) {
    cin >> c[i] >> l[i];
  }

  for (int i=0;i<N;++i) {
    sum += l[i];
    if (sum > 100) {
      cout << S << endl;
      return 0;
    }
    R.append(l[i], c[i]);
  }
  cout << R << endl;
  return 0;
}
