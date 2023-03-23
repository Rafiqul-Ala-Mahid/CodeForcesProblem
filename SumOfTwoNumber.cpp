#include<bits/stdc++.h>
using namespace std;

int sum_of_digits(int n){
    int d = 0, r = 0;
    while (n > 0){
        d += (n % 10);
        n /= 10;
    }
    return d;
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
        long long k = n,r,s,ans,p,q;
        if(n%2==0){
            cout << n / 2 << " " << n / 2 << endl;
        }
        else{
            int d = 0,a[100000],r=0;
            while (n>0){
                a[r++] = n % 10;
                n /= 10;
            }
            // for (int i = 0; i < r;i++){
            //     cout << a[i] << " ";
            // }
            // cout << endl;
            p = 0, q = 0;
            int j = 1, k = 0, m, o,u=1,v=0;
            for (int i = 0; i < r; i++){
                m = a[i] / 2;
                o = a[i] - m;
                p += (m * pow(10, i));
                q += (o * pow(10, i));
                if(a[i]%2)
                    swap(p, q);
            }
            cout << p << " " << q << endl;
        }
    }
}