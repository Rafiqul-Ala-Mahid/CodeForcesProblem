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
        int a[n];
        for (int i = 0; i < n;i++)
            cin >> a[i];
        sort(a, a + n);
        if(a[0]%2){
            cout << "YES\n";
        }
        else{
            bool c = true;
            for (int i = 0; i < n;i++){
                if(a[i]%2){
                    c = false;
                }
            }
            if(c){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
}