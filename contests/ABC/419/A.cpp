#include <iostream>
#include <string>

using namespace std;

string S;

int main() {
    cin >> S;

    if (S == "red") {
        cout << "SSS";
    } else if (S == "blue") {
        cout << "FFF";
    } else if (S == "green") {
        cout << "MMM";
    } else {
        cout << "Unknown";
    }

    cout << "\n";

}
