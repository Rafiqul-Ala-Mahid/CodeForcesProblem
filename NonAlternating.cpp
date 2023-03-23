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
        int a=1,b=0,k=2,l=2,p=1,q=0,r=0,s=0,m=0;
        n--;
        for (int i = 2; i <= n; i++)
        {
            if(k>0){
                b += i;
                k--;
                int e = i / 2;
                r += (i / 2);
                s += (i - e);
                if (k == 0)
                {
                    l = 2;
                }
            }
            else{
                a += i;
                l--;
                int f = i / 2;
                q += (i / 2);
                p += (i - f);
                if (l == 0)
                {
                    k = 2;
                }
            }
            n -= i;
        }
        if(k==0){
            a += n;
            int g = n / 2;
            q += (n / 2);
            p += (n - g);
        }
        else{
            b += n;
            int h = n / 2;
            r += (n / 2);
            s += (n - h);
        }
        // if(a%2){
        //     q = a / 2;
        //     p = a - q;
        // }
        // else if(a%2==0){
        //     p = (a / 2);
        //     q = a / 2;
        // }
        // if(b%2){
        //     r = b / 2;
        //     s = b - r;
        // }
        // else if(b%2==0){
        //     r = b / 2;
        //     s = b / 2;
        // }
        cout << p << " " << q<<" "<<r<<" "<< s <<endl;
    }
}