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
        int a[n],m=0,p=0;
        for (int i = 0; i < n;i++){
            cin >> a[i];
            if(a[i]%2)
                m++;
            else
                p++;
        }
        if(m==0||(m==2 && p==1))
            cout << "NO"<<endl;
        else{
            cout << "YES"<<endl;
            int sum = 0,r=0,s=0,v=0;
            for (int i = 0; i < n-2;i++){
                for (int j = 1; j < n-1;j++){
                    for (int k = 2; k < n;k++){
                        if((a[i]+a[j]+a[k])%2 && k!=i && k!=j && i!=j){
                            cout << (i + 1) << " " << (j + 1) << " " << (k + 1) << endl;
                            sum = 1;
                            break;
                        }
                    }
                    if(sum==1)
                        break;
                }
                if(sum==1)
                    break;
            }

        }
    }
}