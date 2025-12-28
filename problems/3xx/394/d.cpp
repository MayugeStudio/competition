#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
  string s; cin >> s;
  long long n = s.size();
  stack<char> st;
  st.push(s[0]);
  for (int i=1; i<n; ++i) {
    if (st.size() == 0) {
      st.push(s[i]);
      continue;
    }

    if (st.top() == '(' && s[i] == ')') {
      st.pop();
    } else if (st.top() == '[' && s[i] == ']') {
      st.pop();
    } else if (st.top() == '<' && s[i] == '>') {
      st.pop();
    } else {
      st.push(s[i]);
    }
  }

  if (st.size() > 0) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }

  return 0;
}
