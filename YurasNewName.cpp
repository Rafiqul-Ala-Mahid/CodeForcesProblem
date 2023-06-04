#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--)
  {
    /* code */
    string s;
    cin >> s;
    int n = s.size();
    int a=0;
    if (s[0] == '_')
      a = 1;
    if (n == 1 && s[0] == '^')
      a = 1;
    for (int i = 0; i < n; i++) {
      if (s[i] == '_' && s[i + 1] != '^')
        a++;
    }
    cout<<a<<endl;
  }
  
}