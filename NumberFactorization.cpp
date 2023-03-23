#include <bits/stdc++.h>
using namespace std;

int t, n;

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        int ans = 0;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                int p = 0;
                while (n % i == 0) {
                    p++;
                    n /= i;
                }
                ans = max(ans, p);
            }
        }
        if (n > 1)
            ans = max(ans, 1);
        cout << ans << endl;
    }
    return 0;
}