#include <bits/stdc++.h>

using namespace std;


#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a,i<b;i++)
#define ff first
#define ss second

/*
    #ifdef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
*/


int main() {
    #ifdef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> alice(n), bob(n);
        for (int i = 0; i < n; ++i) {
            cin >> alice[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> bob[i];
        }

        // Sort marbles in descending order for each player
        sort(alice.begin(), alice.end(), greater<int>());
        sort(bob.begin(), bob.end(), greater<int>());

        long long aliceScore = 0;
        long long bobScore = 0;

        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                aliceScore += alice[i];
            } else {
                bobScore += bob[i];
            }
        }

        cout << aliceScore - bobScore << endl;
    }

    return 0;
}
