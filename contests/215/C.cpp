#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define ll long long
string S;
ll K;

int main() {
  cin >> S >> K;

  sort(S.begin(), S.end());
  do {
    K--;
  } while(K>0 && next_permutation(S.begin(), S.end()));

  cout << S << endl;
  return 0;
}
