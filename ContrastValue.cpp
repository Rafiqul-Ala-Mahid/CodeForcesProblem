#include<iostream>
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
        int a[n];
        for (int i = 0; i < n;i++){
            cin >> a[i];
        }
        int l = -1,m=1;
        for (int i = 1; i < n;i++){
            if(a[i]<a[i-1] && l!=1){
                l = 1;
                m++;
            }
            else if(a[i]>a[i-1] && l!=2){
                l = 2;
                m++;
            }
        }
        if(l==-1)
            cout << "1\n";
        else
            cout << m << endl;
    }
}