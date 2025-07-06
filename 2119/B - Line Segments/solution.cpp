#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int t;
    std::cin >> t;
 
    while (t--) {
        int n;
        std::cin >> n;
 
        long long px, py, qx, qy;
        std::cin >> px >> py >> qx >> qy;
 
        std::vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> a[i];
        }
 
        long long dx = px - qx;
        long long dy = py - qy;
        long double target_dist_sq = (long double)dx * dx + (long double)dy * dy;
        long double target_dist = std::sqrt(target_dist_sq);
 
        long double min_current_dist = 0.0;
        long double max_current_dist = 0.0;
 
        for (int i = 0; i < n; ++i) {
            long double current_a = static_cast<long double>(a[i]);
 
            long double next_min_dist;
            if (current_a >= min_current_dist && current_a <= max_current_dist) {
                next_min_dist = 0.0;
            } else {
                next_min_dist = std::min(std::abs(min_current_dist - current_a), std::abs(max_current_dist - current_a));
            }
 
            long double next_max_dist = max_current_dist + current_a;
 
            min_current_dist = next_min_dist;
            max_current_dist = next_max_dist;
        }
 
        if (target_dist >= min_current_dist && target_dist <= max_current_dist) {
            std::cout << "Yes\n";
        } else {
            std::cout << "No\n";
        }
    }
 
    return 0;
}