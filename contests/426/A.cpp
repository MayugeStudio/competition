#include <iostream>
#include <string>
using namespace std;

int main() {
  string X, Y;
  cin >> X >> Y;
  string s = "No";
  if (Y == "Ocelot") {
    s = "Yes";
  } else if (Y == "Serval") {
    if (X == "Serval" || X == "Lynx") s = "Yes";
  } else if (Y == "Lynx") {
    if (X == "Lynx") s = "Yes";
  }

  cout << s << endl;

  return 0;
}
