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
        int a;
        map<int, int> mp;
        for (int i = 0; i < n;i++){
            cin >> a;
            mp[a]++;
        }
        for (auto &i: mp){
            cout<< i.first << " "<<i.second<<endl;
        }
    }
}