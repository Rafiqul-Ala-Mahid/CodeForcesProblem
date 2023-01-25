#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    if (b == 0)
       return a;
    return gcd(b, a % b); 
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n;i++)
            cin >> a[i];
        long long p[n], s[n];
        for (int i = 0; i < n;i++){
            if(i==0){
                p[i] = a[i];
            }
            else{
                p[i] = p[i - 1] + a[i];
            }
        }
        for (int i = n-1; i >= 0;i--){
            if(i==n-1){
                s[i] = a[i];
            }
            else{
                s[i] = s[i + 1] + a[i];
            }
        }
        long long mx = 0;
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, gcd(p[i-1],s[i]));
        }
        cout << mx << endl;
    }
}