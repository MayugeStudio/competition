#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
  string s1, s2, s3, s4;
  cin >> s1 >> s2 >> s3 >> s4;
  set<string> si, ss;
  si.insert(s1);
  si.insert(s2);
  si.insert(s3);
  si.insert(s4);

  ss.insert("H");
  ss.insert("2B");
  ss.insert("3B");
  ss.insert("HR");

  if (si == ss) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
