#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if (b == 0)
       return a;
    return gcd(b, a % b); 
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        string s, p;
        cin >> s >> p;
        int n = s.size(), m = p.size();
        int r = n * m;
        int g = gcd(n, m);
        r /= g;
        string i = s,j=p;
        while (i.size() != r)
        {
            i += s;
        }
        while(j.size()!=r){
            j += p;
        }
        if (i == j)
            cout << i << endl;
        else
            cout << "-1" << endl;
    }
}