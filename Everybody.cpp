#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n;i++)
            cin >> a[i];
        int ans = 0;
        for (int i = 1; i < n;i++){
            if(a[i]%2==a[i-1]%2)
                ans++;
        }
        cout << ans << endl;
    }
}