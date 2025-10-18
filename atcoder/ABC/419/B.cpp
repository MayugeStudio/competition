#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<int> X;
vector<int> R;


int main() {
    int q;
    int v;
    cin >> N;
    
    for (int i=0;i<N;++i) {
        cin >> q;
        if (q==1) {
            cin >> v;
            X.push_back(v);
            sort(X.begin(), X.end(), [](int a, int b) { return a > b; });
        } else if (q==2) {
            int end = X.size()-1;
            int value = X.at(end);
            R.push_back(value);
            X.pop_back();
        }
    }

    for (int i=0;i<R.size();++i) {
        cout << R[i] << endl;
    }
}
