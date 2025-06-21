#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll k;
    cin >> n >> k;

    vector<ll> bars(n);
    for (int i = 0; i < n; ++i) {
        cin >> bars[i];
    }

    sort(bars.begin(), bars.end());

    // Step 1: Find candidate house numbers
    set<ll> candidates;
    for (auto pos : bars) {
        candidates.insert(pos);
        candidates.insert(pos + 1); // also check one step to the right
        candidates.insert(pos - 1); // and one step to the left
    }

    // Step 2: Precompute prefix sums
    vector<ll> prefixSum(n + 1, 0); // prefixSum[i] = sum of bars[0] to bars[i-1]
    for (int i = 0; i < n; ++i) {
        prefixSum[i + 1] = prefixSum[i] + bars[i];
    }

    auto compute_f = [&](ll x) {
        // binary search to split bars into left and right of x
        int idx = lower_bound(bars.begin(), bars.end(), x) - bars.begin();

        ll leftSum = prefixSum[idx];
        ll rightSum = prefixSum[n] - prefixSum[idx];

        ll leftCount = idx;
        ll rightCount = n - idx;

        ll cost = (x * leftCount - leftSum) + (rightSum - x * rightCount);
        return cost;
    };

    // Step 3: Find the minimum f(x) value
    ll min_f = LLONG_MAX;
    for (auto x : candidates) {
        min_f = min(min_f, compute_f(x));
    }

    // Step 4: Count how many x can reach min_f by closing ≤ k bars
    int answer = 0;
    for (auto x : candidates) {
        ll fx = compute_f(x);
        if (fx - min_f <= k) {
            ++answer;
        }
    }

    cout << answer << "\n";

    return 0;
}
