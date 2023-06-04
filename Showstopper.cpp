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
        int a[n], b[n];
        for (int i = 0; i < n;i++)
            cin >> a[i];
        for (int i = 0; i < n;i++)
            cin >> b[i];
        int r = 1;
        for (int i = 0; i < n-1;i++){
            if(a[i]>a[n-1] || b[i]>b[n-1]){
                swap(a[i], b[i]);
                if(a[i]>a[n-1] || b[i]>b[n-1])
                    r = 0;
            }
        }
        if(r)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}