#include <iostream>

int main() {
  int N, K;
  std::vector<int> A;
  std::cin >> N;
  for (int i=0; i<N; ++i) {
    int a;
    std::cin >> a;
    A.push_back(a);
  }
  std::cin >> K;

  int c = 0;
  for (auto e: A) {
    if (e >= K) {
      c += 1;
    }
  }

  std::cout << c << std::endl;
}

