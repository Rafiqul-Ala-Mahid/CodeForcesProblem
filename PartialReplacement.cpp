#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int m = 0, a[n];
        for (int i = 0; i < n;i++){
            if(s[i]=='*'){
                a[m++] = i;
            }
        }
        if(m<=2){
            cout << m << endl;
        }
        else{
            int ans=1;
            int l = s.find('*');
            int r = s.find_last_of('*');
            for (int i = l; i < r;i+=k){
                while(s[i]=='.'){
                    i--;
                }
                ans++;
            }
            cout << ans << endl;
        }
    }
}