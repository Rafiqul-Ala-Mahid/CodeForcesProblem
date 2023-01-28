#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code
        string pi ="314159265358979323846264338327";
        string s;
        cin >> s;
        int l = 0;
        for (int i = 0; i < s.size();i++){
            if(s[i]!=pi[i]){
                l = i;
                break;
            }
            l++;
        }
        cout << l << endl;
         */

        /*
        int n, s, r;
        cin >> n >> s >> r;
        int a = s - r;
        s -= a;
        cout << a << " ";
        for (int i = n - 1; i >= 1; i--){
            cout << s / i << " ";
            s -= (s / i);
        }
        cout << endl;
        */

       /*
       int n;
        cin >> n;
        int f = n;
        int a[n][n];
        for (int i = 0; i < n;i++){
            for (int j = 0; j < n - 1;j++){
                cin >> a[i][j];
            }
        }
        int b[n],k=0,p=0;
        int m = a[0][0];
        if(m!=a[1][0] && m!=a[2][0]){
            m = a[1][0];
            p = 0;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 1;j++){
                if(m!=a[i][j]){
                    p = i;
                }
            }
        }
        cout << m << " ";
        for (int i = p; i < p + 1;i++){
            for (int j = 0; j < n - 1;j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
       */

        /*
        int n;
        cin >> n;
        int a[n];
        map<int, int> mp;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
            mp[a[i]]++;
        }
        int ans = 0;
        for (auto&i:s)
        {
            if(mp[i-1]<mp[i]){
                ans += (mp[i] - mp[i - 1]);
            }
        }
        cout << ans << endl;
        */
        int n;
        cin >> n;
        if(n%2||((n+n/2)^(n/2))!=n){
            cout << "-1" << endl;
        }
        else{
            cout << (n + n / 2) << " " << n / 2 << endl;
        }
    }
}