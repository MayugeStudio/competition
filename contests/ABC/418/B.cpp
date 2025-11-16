#include <iostream>
#include <string>
using namespace std;

string S;

int main() {
    cin >> S;
    int begin = 0;
    int end = S.size();
    
    while (true) {
        if (S[begin] != 't') {
            if (begin < end) {
                begin++;
            } else {
                return 0;
            }
        } else {
            break;
        }
    }
    while (true) {
        if (S[end] != 't') {
            if (end > begin) {
                end--;
            } else {
                return 0;
            }
        } else {
            break;
        }
    }

    float count = 0;
    for (int i=begin;i<end;++i) {
        if (S[i] == 't') {
            count++;
        }
    }

    cout << (float)(count-2.f) / (float)(S.size()-2.f) << endl;
}
