#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, Q;
vector<int> A;
vector<int> B;

int solve(int b) {
    if (b == 1) return 1;

    int max = *max_element(begin(A), end(A));
    if (b > max) return -1;
    
    int ans = 0;
    for (int i=0; i<N; i++) {
        if (A[i] < b) {
            ans += A[i];
        } else {
            ans += (b - 1);
        } 
    }
    return ans+1;
}

int main() {
    cin >> N >> Q;
    for (int i=0;i<N;++i) {
        int a;
        cin >> a;
        A.push_back(a);
    }
    for (int i=0;i<Q;++i) {
        int a;
        cin >> a;
        B.push_back(a);
    }

    for (int i=0;i<Q;++i) {
        int ans = solve(B[i]);
        cout << ans << endl;
    }
}
