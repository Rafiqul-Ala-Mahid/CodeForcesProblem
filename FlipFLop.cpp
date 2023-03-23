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
        int a[n],b[n], s = 0,r=0;
        for (int i = 0; i < n;i++){
            cin >> a[i];
            s += a[i];
        }
        int p = -2, q = -1;
        for (int i = 0; i < n-1;i++)
        {
            if(a[i]==-1 && a[i+1]==-1){
                p = i;
            }
            else if(a[i]==-1 && a[i+1]!=-1){
                q = i;
            }
        }
        if(p<0 && q<0 && a[n-1]!=-1)
            cout << s - 4<<endl;
        else if(p>=0){
            cout << s + 4 << endl;
        }
        else{
            cout << s << endl;
        }
    }
}