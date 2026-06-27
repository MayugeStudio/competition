#include <iostream>
using namespace std;

int N, M;
int A[100];
int B[100];

int main() {
    cin >> N >> M;
    for (int i=0;i<N;++i) cin >> A[i];
    for (int i=0;i<M;++i) cin >> B[i];
    
    for (int i=0;i<M;++i) {
        int j = 0;
        while (j < N) {
            if (A[j] == B[i]) {
                A[j] = 0;
                break;
            }
            j++;
        }
    }
    
    for (int i=0;i<N;++i) {
        if (A[i] != 0) {
            cout << A[i] << " ";
        }
    }
    cout << endl;
}
