#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n;i++)
        cin >> a[i];
    long long x = 0,s[n],m = 1e9,r=1e9;
    for (int i = 0; i < n;i++){
        if(i==0){
            s[i] = a[i];
        }
        else{
            s[i] = (s[i - 1] + a[i]);
        }
    }
    for (int i = 0, j = k - 1; j < n;j++,i++){
        if(i==0)
            r = (s[j]);
        else
            r = s[j] - s[i-1];
        if (r < m)
        {
            x = i+1;
            m = r;
        }
    }
    cout << x << endl;
}