#include <iostream>
using namespace std;
 
int main() {
    int t, k;
    cin >> t;
    while (t--) {
        cin >> k;
        if (k % 2 == 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}