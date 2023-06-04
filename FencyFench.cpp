#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int a;
        cin >> a;
        cout << (360 % (180 - a) == 0 ? "YES" : "NO")<<endl;
    }
}