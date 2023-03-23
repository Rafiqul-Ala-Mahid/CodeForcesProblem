#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int l[51], r[51], d[51];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        int a[n],b[n];
        for (int i = 0; i < n;i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        int k = 0,m=0,r;
        vector<int> v,s;
        vector<int>vc;
        for (int i = 0; i < n;i++){
            if(a[i]==b[i])
                continue;
            for (int j = i + 1; j < n;j++){
                if(a[j]==b[i]){
                    r = j;
                    break;
                }
            }
            v.push_back(a[r]);
            for (int j = i; j < r;j++)
                v.push_back(a[j]);
            k = 0;
            for (int j = i; j <= r;j++){
                a[j] = v[k++];
            }
            vc.push_back(i+1);
            s.push_back(r + 1);
        }
        cout << vc.size() << endl;
        for (int i = 0; i < vc.size();i++){
            cout << vc[i] << " " << s[i] << " " << s[i] - vc[i] << endl;
        }
    }
}