#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> Pair;

bool compare(const Pair& a, const Pair& b) {
    // Sort by the first element in ascending order
    if (a.first < b.first)
        return true;
    else if (a.first > b.first)
        return false;
    else {
        // If the first elements are the same, sort by the second element in descending order
        return a.second > b.second;
    }
}

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<Pair> pairs;
        for (int i = 0; i < n; i++) {
            int first, second;
        
            cin >> first;
            cin >> second;

            pairs.push_back(make_pair(first, second));
        }
        sort(pairs.begin(), pairs.end(), compare);

        int x = 0;
        long long ans = 0;
        int c = pairs[0].first;
        for (int i = 0; i < n; i++)
        {
            if(i>0 && pairs[i].first!=pairs[i-1].first){
                c = pairs[i].first;
                x = 0;
            }
            if(x<c){
                x++;
                ans += pairs[i].second;
            }
        }
        cout << ans << endl;
    }
}