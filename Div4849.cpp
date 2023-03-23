#include<bits/stdc++.h>
using namespace std;

// void solve(){
//     int n;
//     cin >> n;
//     string s,a,b;
//     cin >> s;
//     int k = 0, l = 0;
//     // cout << a << " "<< b << endl;
//     set<char> st,bt;
//     int p[n], q[n];
//     for (int i = 0; i < n; i++)
//     {
//         st.insert(s[i]);
//         p[i] = st.size();
//     }
//     for (int i = n-1; i>=0 ;i--){
//         bt.insert(s[i]);
//         q[i] = bt.size();
//     }
//     // for (int i = 0; i < n;i++){
//     //     cout << p[i] << " " << q[i] << endl;
//     // }

//     int mx = 0, nx;
//     for (int i = 0; i < n;i++){
//         if(i!=n-1)
//             mx = max(mx, p[i] + q[i+1]);
//         else{
//             mx = max(mx, p[i-1]+1);
//         }
//     }
//     cout << mx << endl;
// }


void solve(){
    int n;
    cin >> n;
    int a[n],c=0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]<=0){
            c++;
        }
    }
    long long sum = 0;
    for (int i = 0; i < n;i++){
        // 
        sum+= abs(a[i]);
    }
    if (c % 2)
    {
        int mn = INT32_MAX;
        for (int i = 0; i < n;i++){
            mn = min(mn, abs(a[i]));
        }
        sum -= (2 * mn);
    }
    cout << sum << endl;
}

// void solve(){
//     int n,c;
//     cin >> n>>c;
//     int x;
//     vector<int> v;
//     for (int i = 1; i <= n; i++){
//         cin >> x;
//         v.push_back(x+i);
//     }
//     sort(v.begin(), v.end());
//     int b = 0, r = 0;
//     long long sum = 0;
//     for (int i = 0; i < n;i++){
//         sum += (v[i]);
//         if(sum<=c){
//             r++;
//         }
//     }
//         cout << r << endl;
// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }
}