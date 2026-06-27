#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
  string s; cin >> s;
  int e = count(s.begin(), s.end(), 'E');
  int w = count(s.begin(), s.end(), 'W');
  if (e < w) cout << "West" << endl;
  else cout << "East" << endl;
  return 0;
}
