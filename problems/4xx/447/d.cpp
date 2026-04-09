#include <iostream>
#include <queue>
using namespace std;
using ll = long long;
int main() {
  string s; cin >> s;
  ll n = s.size();
  priority_queue<ll, vector<ll>, greater<ll>> aq;
  priority_queue<ll, vector<ll>, greater<ll>> bq;
  priority_queue<ll, vector<ll>, greater<ll>> cq;
  for (int i=0; i<n; ++i) {
    if (s[i] == 'A') aq.push(i);
    else if (s[i] == 'B') bq.push(i);
    else if (s[i] == 'C') cq.push(i);
  }

  ll ans = 0;
  while (!aq.empty() && !bq.empty() && !cq.empty()) {
    while (aq.top() > bq.top() && !bq.empty()) {
      bq.pop();
    }
    while (bq.top() > cq.top() && !cq.empty()) {
      cq.pop();
    }
    while (aq.top() > cq.top() && !cq.empty()) {
      cq.pop();
    }

    if (aq.top() < bq.top() && bq.top() < cq.top()) {
      ans += 1;
      aq.pop();
      bq.pop();
      cq.pop();
    } else {
      break;
    }
  }
  cout << ans << endl;

  return 0;
}
