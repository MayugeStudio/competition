#include <iostream>
#include <string>
using namespace std;

int N, A, B;
string S;

int main() {
    cin >> N >> A >> B;
    cin >> S;

    for (int i=A;i<S.size()-B;i++) {
        cout << S[i];
    }
    cout << endl;

    return 0;
}

