#include<iostream>
#include<algorithm>

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
        int a[n];
        for (int i = 0; i < n;i++){
            cin >> a[i];
        }
        for (int i = 0; i < n;i++){
            cout << (n - a[i]) + 1 << " ";
        }
        cout << endl;
    }
}