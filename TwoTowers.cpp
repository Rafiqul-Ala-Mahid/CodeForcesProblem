#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n, m;
        cin >> n >> m;
        string s, p;
        cin >> s >> p;
        reverse(p.begin(), p.end());
        int ans = 0;
        s += p;
        for (int i = 1; i < n+m; i++){
            if(s[i]==s[i-1]){
                ans++;
            }
        }
        cout << (ans <= 1 ? "YES" : "NO") << endl;
    }
}