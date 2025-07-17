#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        int ans = 0;
        for (int i = 0; i <= n - k;) {
            bool ok = true;
            for (int j = 0; j < k; j++) {
                if (a[i + j]) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                ans++;
                i += k + 1;
            } else {
                i++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}