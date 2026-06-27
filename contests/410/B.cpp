#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, Q;
  std::vector<int> Boxes, Balls, R;

  cin >> N;
  cin >> Q;
  for (int i=0;i<N;++i) {
    Boxes.push_back(0);
  }
  
  for (int i=0;i<Q;++i) {
    int x;
    cin >> x;
    Balls.push_back(x);
  }

  for (auto b: Balls)
    if (b == 0) {
      // get the index of minimum value
      int mi = 0;
      for (int j=0;j<N;++j) {
        if (Boxes[j] < Boxes[mi]) {
          mi = j;
        }
      }
      Boxes[mi] += 1;
      R.push_back(mi+1);
    } else {
      Boxes[b-1] += 1;
      R.push_back(b);
    }

  for (auto e: R) {
    cout << e << " ";
  }
}
