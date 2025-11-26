#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

string S1, S2, S3;

int main() {
  unordered_map<string, bool> m;
  m["ABC"] = false;
  m["ARC"] = false;
  m["AGC"] = false;
  m["AHC"] = false;

  cin >> S1 >> S2 >> S3;
  m[S1] = true;
  m[S2] = true;
  m[S3] = true;

  for (auto val : m) {
    if (!val.second) {
      cout << val.first << endl;
    }
  }

  return 0;
}
