#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        int a = 0;
        for (int i = 1; i < s.size();i++){
            if(s[i-1]==s[i] && (i==1 || (s[i-2]!=s[i-1]))){
                a++;
            }
        }
        cout << (a >= 2 ? "YES" : "NO") << endl;
    }
}