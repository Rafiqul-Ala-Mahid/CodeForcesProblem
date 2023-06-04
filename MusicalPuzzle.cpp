#include<iostream>
#include<string>
#include <set>

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
        string s,r;
        cin >> s;
        set<string> st;
        for (int i = 1; i < n;i++){
            r = s[i - 1];
            r += s[i];
            st.insert(r);
        }
        cout << st.size() << endl;
    }
}