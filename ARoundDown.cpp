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
        if(n==1){
            cout << 0 << endl;
        }
        else if(n<10)
            cout << (n - 1) << endl;
        else if(n<100)
            cout << (n - 10) << endl;
        else if(n<1000)
            cout << (n - 100) << endl;
        else if(n<10000)
            cout << (n - 1000) << endl;
        else if(n<100000)
            cout << (n - 10000) << endl;
        else if(n<1000000)
            cout << (n - 100000) << endl;
        else if(n<10000000)
            cout << (n - 1000000) << endl;
        else if(n<100000000)
            cout << (n - 10000000) << endl;
        else if(n<1000000000)
            cout << (n - 100000000) << endl;
        else{
            cout << 0 << endl;
        }
    }
}