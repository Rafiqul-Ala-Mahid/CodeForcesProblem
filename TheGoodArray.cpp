#include<iostream>
#include<string>
#include<math.h>

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
        n--;
        int ans = (n%k==0?n/k:(n/k)+1);
        ans++;
        cout << ans << endl;
    }
}