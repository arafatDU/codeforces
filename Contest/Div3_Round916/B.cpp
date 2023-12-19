#include <bits/stdc++.h>

using namespace std;


#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a,i<b;i++)
#define ff first
#define ss second


int main() {
    #ifdef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> order;

        // Start with the first problem
        order.push_back(1);

        // Set up variables for increasing and decreasing difficulty levels
        int inc = 2, dec = n;

        // Iterate to create the order based on desired excitements
        for (int i = 1; i < n; ++i) {
            if (k > 0) {
                order.push_back((i % 2 == 0) ? dec-- : inc++);
                k--;
            } else {
                order.push_back((i % 2 == 0) ? inc++ : dec--);
            }
        }

        // Print the order
        for (int i = 0; i < n; ++i) {
            cout << order[i] << " ";
        }
        cout << endl;
    }

    return 0;
}