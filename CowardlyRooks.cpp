#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int x[n],y[n];
        for (int i = 0; i < m;i++){
            cin >> x[i] >> y[i];
        }
        if(m<n){
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}