#include <iostream>
#include <map>
using namespace std;

int N;
int A[1000000];

int main() {
    cin >> N;
    for (int i=0;i<N;++i) {
        cin >> A[i];
    }
    map<int, int> m;

    for (int i=0;i<N;++i) {
        m[A[i] + i] += 1;
    }

    long ans = 0;
    for (int j=0;j<N;++j) {
        ans += m[j-A[j]];
    }

    cout << ans << endl;
}
