#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;
    int a = k % 10;
    int i = 0;
    while(1){
        i++;
        if (((a * i) % 10) == 0 || ((a * i) % 10)==r)
        {
            break;
        }
    }
    cout << i << endl;
}