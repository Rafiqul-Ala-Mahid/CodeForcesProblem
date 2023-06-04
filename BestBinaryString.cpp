#include<iostream>
#include<string>

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
        int a = 0, b = 0, c=-1;
        for (int i = 0; i < s.size();i++){
            if(s[i]=='1'){
                c = 1;
            }
            else if(s[i]=='0'){
                c = -1;
            }
            else if(s[i]=='?'){
                if(c<0)
                    s[i] = '0';
                else
                    s[i] = '1';
            }
        }
        cout << s << endl;
    }
}