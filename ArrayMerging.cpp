#include<iostream>
#include<algorithm>
#include<map>
 
using namespace std;

void mergeArray(int a[], map<int,int>& m, int n){
    int c = 1;
    m[a[0]] = 1;
    for (int i = 1; i < n;i++){
        if(a[i-1]==a[i]){
            c++;
        }
        else{
            c = 1;
        }
        m[a[i]] = max(m[a[i]], c);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        map<int, int> m1, m2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        mergeArray(a, m1, n);
        mergeArray(b, m2, n);

        int ans = 0;

        for (int i = 0; i <= 2 * n;i++){
            ans = max(ans, (m1[i] + m2[i]));
        }
        cout << ans << endl;
    }
}