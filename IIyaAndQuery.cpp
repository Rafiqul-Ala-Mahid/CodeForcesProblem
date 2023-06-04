#include<iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int a[n];
    a[0] = 0;
    int p = 0;
    for (int i = 1; i < n; i++){
        if(s[i-1]==s[i]){
            p++;
            a[i] = p;
        }
        else{
            a[i] = a[i - 1];
        }
    }
    int m;
    cin >> m;
    while(m--){
        int l, r;
        cin >> l >> r;
        cout << a[r - 1] - a[l - 1] << endl;
    }
}