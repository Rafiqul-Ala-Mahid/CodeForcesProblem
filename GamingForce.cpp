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
        sort(a, a + n);
        int b = 0;
        for (int i = 0; i < n;i++){
            if(a[i]==1)
                b++;
        }
        int ans = b / 2;
        if(b%2)
            ans++;
        ans += (n-b);
        cout << ans << endl;
    }
}