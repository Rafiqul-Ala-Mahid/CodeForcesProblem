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
        int a[n],c=0;
        for (int i = 0; i < n;i++){
            cin >> a[i];
            if(a[i]==2){
                c++;
            }
        }
        long long s = 1, r,k=-1;
        // for (int i = 0; i < n-1;i++){
        //     s *= a[i];
        //     r =1;
        //     for (int j = i + 1; j < n;j++){
        //         r *= a[j];
        //     }
        //     if (s == r)
        //     {
        //         k = i+1;
        //         break;
        //     }
        // }
        if(c%2){
            cout << -1 << endl;
        }
        else{
            int d = c / 2,f=0;
            if(c==0){
                cout << 1 << endl;
            }
            else{
                for (int i = 0; i < n;i++){
                    if(a[i]==2){
                        d--;
                    }
                    if(d==0){
                        f = i + 1;
                        break;
                    }
                }
                cout << f << endl;
            }
        }
        // cout << k << endl;
    }
}