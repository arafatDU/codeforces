#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, r;
        cin >> a >> b >> r;

        // Calculate XOR of a and b
        long long xorResult = a ^ b;

        // Find the leftmost set bit in xorResult
        int msbPos = 63 - __builtin_clzll(xorResult);

        // If r is less than the leftmost set bit position, the answer is 0
        if (r < msbPos) {
            cout << 0 << endl;
        } else {
            // Otherwise, find the minimum value for |(a⊕x)−(b⊕x)| by choosing x such that the leftmost set bit is set
            long long minValue = xorResult | ((1LL << (msbPos + 1)) - 1);

            // Check if minValue exceeds r
            if (minValue > r) {
                cout << r << endl;
            } else {
                cout << minValue << endl;
            }
        }
    }

    return 0;
}
