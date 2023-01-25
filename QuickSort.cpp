#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n;i++)
        cin >> a[i];
    if(is_sorted(a,a+n))
        cout<<0<<endl;
    else{
        int c = 1;
        for (int i = 0; i < n;i++){
            if(a[i]==c)
                c++;
        }
        cout << (n - c + k) / k << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }
}