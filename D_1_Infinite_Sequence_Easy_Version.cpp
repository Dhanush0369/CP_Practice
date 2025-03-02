#include <bits/stdc++.h>
using namespace std;
#define int long long

unordered_map<int, int> memo;  // Memoization to store previously computed values

// Recursive function to compute a_l
int compute_a_l(int l, int n, vector<int>& a) {
    if (l <= n) return a[l];  // Base case: return precomputed value

    if (memo.find(l) != memo.end()) return memo[l];  // If already computed, return it

    int half = l / 2;
    return memo[l] = compute_a_l(half, n, a);  // Compute recursively and store result
}

void solve() {
    int n, l, r;
    cin >> n >> l >> r;

    vector<int> a(n + 1);  // Store the first n elements (1-based indexing)
    
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    cout << compute_a_l(l, n, a) << "\n";  // Compute and print the answer
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        memo.clear();  // Clear memoization for each test case
        solve();
    }

    return 0;
}
