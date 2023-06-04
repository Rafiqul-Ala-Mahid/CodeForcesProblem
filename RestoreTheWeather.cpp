#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int ans[100001];

bool comparePairs(const pair<int, int>& a, const pair<int, int>& b) {
    // Compare the first elements of the pairs
    if (a.first < b.first) {
        return true;
    } else if (a.first > b.first) {
        return false;
    } else {
        // If the first elements are equal, compare the second elements
        return a.second < b.second;
    }
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n,k;
        cin >> n >> k;
        int a[n], b[n], c[n];
        vector<pair<int,int> > pairs;
        for (int i = 0; i < n;i++){
            cin >> a[i];
            c[i] = a[i];
            pairs.push_back(make_pair(a[i], i));
        }
        for (int i = 0; i < n;i++){
            cin >> b[i];
        }
        sort(b, b + n);
        map<int, int> m;
        sort(pairs.begin(), pairs.end(), comparePairs);
        int j = 0;
        // Output the sorted vector of pairs
        for (const auto& pair : pairs) {
            // cout << "First: " << pair.first << ", Second: " << pair.second << endl;
            m[pair.second] = b[j++];
        }
        for (int i = 0; i < n;i++){
            cout << m[i] << " ";
        }
        cout << endl;
    }
}