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
        int r = 1;
        for (int i = 1; i < n;i++){
            if((a[i]%a[0])!=0)
                r = 0;
        }
        if(r)
            cout << "YES\n";
        else{
            cout << "NO\n";
        }
    }
}