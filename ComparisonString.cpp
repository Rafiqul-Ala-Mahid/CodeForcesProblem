#include<iostream>
#include<algorithm>
#include<string>

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
        int b = 0,c=0;
        int m = 0,p=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='<'){
                b++;
                p = max(p, b);
                c = 0;
            }
            else{
                c++;
                m = max(c, m);
                b = 0;
            }
        }
        
        cout << max(p,m)+ 1 << endl;
    }
}