#include<iostream>
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
        for (int i = 1; i <= n;i++){
            cout << 2 * i << " ";
        }
        cout << endl;
    }
}