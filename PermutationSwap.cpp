#include<iostream>
#include<algorithm>
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
        int ans = 0;
        for (int i = 1; i <= n;i++){
            cin >> a[i-1];
            ans = __algo_gcd(ans,abs(a[i-1]-i));
        }
        cout << ans << endl;
    }
}