#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n%2){
        for (int i = 0; i < n;i++){
            cout << n << " ";
        }
        cout << endl;
    }
    else{
        for (int i = 1; i <= n - 2;i++){
            cout << 2 << " ";
        }
        cout << 1 << " " << 3 << endl;
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