#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        long long a = 1e9+7;
        long long n;
        cin >> n;
        long long r = (n * (n - 1));
        r %= a;
        for (int i = 1; i <= n; i++)
        {
            r = (r * i);
            r %= a;
        }
        cout << r << endl;
    }
}