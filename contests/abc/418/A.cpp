#include <iostream>
using namespace std;

int N;
string S;

int main() {
    cin >> N >> S;
    string tea = "tea";

    for (int i=0; i<3; ++i) {
        if (tea[i] != S[N-3+i]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
