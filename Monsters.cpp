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
        vector<int> v;
        for (int i = 0; i < n;i++){
            int x,b=0;
            cin >> x;
            if(x==1){
                b++;
            }
                v.push_back(x);
        }
        sort(v.begin(), v.end());
        long long s = v[0]-1,j=1;
        for (int i = 1; i < n;i++){
            if((v[i]-j-1)>0){
                s +=(v[i] - j - 1);
                j++;
            }
            else{
                j = v[i];
            }
        }
        cout << s << endl;
    }
}