#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n,k;
        cin >> n >> k;
        long long b[n+1];
        long long sum = 0;
        for (int i = 1; i < n+1; i++)
        {
            cin >> b[i];
        }
        sort(b+1, b + n+1);
        b[0] = 0;
        for (int i = 1; i <= n; i++){
            b[i] += b[i - 1];
        }
        for (int i = 0; i <= k; i++){
            sum = max(sum, (b[n-i]-b[(k-i)*2]));
        }
        cout << sum << endl;
    }
}

