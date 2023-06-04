#include<iostream>
#include<algorithm>

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
        int l[n];
        for (int i = 0; i < n;i++)
        {
            cin >> l[i];
        }
        sort(l, l + n);
        int c = 0,d=-1;
        for (int i = n-1; i>= 0;i--)
        {
            if(l[i]>=n){
                c++;
            }
        }
        if(c==n){
            cout << -1 << endl;
        }
        else{
            cout << c << endl;
        }
    }
}