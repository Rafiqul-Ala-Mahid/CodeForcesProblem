#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int a, b;
        cin >> a >> b;
        long long n, m;
        cin >> n >> m;
        long long ans = 0,c=0;
        c = min((a * m), (m + 1) * b);
        ans = (n / (m + 1) * c);
        n %= (m + 1);
        ans += min(a, b) * n;
        cout << ans << endl;
    }
}