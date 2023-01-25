#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        long long a,b,c,d;
        cin >> a >> b >> c >> d;
        long long count = 0,alice=0,bob=0,i=0,j=0;
        alice = (a + b);
        bob = (a + c);
        long long ans = min(alice, bob);
        long long m = d + c, n = b + d;
        if(a==0)
            cout << 1 << endl;
        else if (ans == alice)
        {
            if(m>alice){
                alice += (alice + 1);
            }
            else if(m<=alice){
                alice += m;
            }
            cout << alice << endl;
        }
        else{
            if(n>bob){
                bob += (bob + 1);
            }
            else if(n<=bob){
                bob += n;
            }
            cout << bob << endl;
        }
    }
}