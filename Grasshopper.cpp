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
        int n, k;
        cin >> n >> k;
        if(n%k!=0){
            cout << 1 << endl;
            cout << n << endl;
        }
        else{
            cout << 2 << endl;
            cout << n - 1 << " " << 1 << endl;
        }
    }
}