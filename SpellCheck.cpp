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
        string s;
        cin >> s;
        if(n!=5){
            cout << "NO\n";
        }
        else{
            string m = "Timru";
            bool c = true;
            sort(s.begin(), s.end());
            for (int i = 0; i < n;i++){
                if(s[i]!=m[i]){
                    c = false;
                    break;
                }
            }
            if(c)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}