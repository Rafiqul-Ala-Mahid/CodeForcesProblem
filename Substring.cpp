#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool compareByLength(const std::string& str1, const std::string& str2) {
    return str1.length() < str2.length();
}

int main()
{
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n;i++){
        cin >> s[i];
    }
    sort(s,s+n, compareByLength);
    for (int i = 1; i < n;i++){
        if((int)s[i].find(s[i-1])<0){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }
}