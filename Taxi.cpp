#include<bits/stdc++.h>
using namespace std;
int a[5];
int main()
{
    int n;
    cin >> n;
    int s;
    for (int i = 0; i < n;i++){
        cin >> s;
        a[s]++;
    }
    a[1] = max(a[1] - a[3], 0);
    cout << a[3] + a[4] + (a[1] + 2 * a[2]+3) / 4 << endl;
}