#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool isValid(string s){
    stack<char> st;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
            cnt++;
        }
        else{
            if(st.size()==0){
                return false;
            }
            char ch = st.top();
            st.pop();
            if ((s[i] == ')' && ch=='(')||(s[i] == '}' && ch=='{') ||(s[i] == ']' && ch=='[')){
                cnt--;
            }
            else{
                return false;
            }
        }
    }
    if(cnt!=0){
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        string s;
        cin >> s;
        cout<<isValid(s)<<endl;
    }
}