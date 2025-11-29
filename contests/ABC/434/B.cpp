#include <iostream>
#include <map>
#include <iomanip>
#include <vector>

using namespace std;

double N, M;

int main() {
  cin >> N >> M;
  cout << fixed;
  cout << setprecision(8) << endl;

  vector<double> kinds(N);
  vector<double> weights(N);

  for (int i=0; i<N; ++i) {
    double kind; cin >> kind;
    double weight; cin >> weight;
    kinds[kind-1]++;
    weights[kind-1] += weight;
  }

  for (int i=0; i<M; ++i) {
    if (kinds[i] == 0) cout << 0 << endl;
    else {
      cout << weights[i]/kinds[i] << endl;
    }
  }

  return 0;
}

