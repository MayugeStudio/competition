#include <iostream>
#include <vector>
#include <set>
using namespace std;


char S[10][10];
typedef vector<vector<char>> table;
int main() {
  int N; cin >> N;
  int M; cin >> M;

  for (int i=0; i<N; ++i) {
    for (int j=0; j<N; ++j) {
      cin >> S[i][j];
    }
  }

  vector<table> patterns;

  for (int start_row=0; start_row<N-M+1; ++start_row){
    for (int start_col=0; start_col<N-M+1; ++start_col) {
      table pattern;
      for (int row=0; row<M; ++row) {
        for (int col=0; col<M; ++col) {
          vector<char> v;
          v.push_back(S[start_row+row][start_col+col]);
          pattern.push_back(v);
        }
      }
      patterns.push_back(pattern);
    }
  }
  set<vector<vector<char>>> ans(patterns.begin(), patterns.end());
  cout << ans.size() << endl;
  return 0;
}

