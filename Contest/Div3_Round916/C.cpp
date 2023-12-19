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

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        long long totalExperience = 0;
        int completedQuests = 0;

        for (int i = 0; i < n; ++i) {
            if (completedQuests >= k) {
                break;
            }

            int times = min(k - completedQuests, 1);  // Complete each quest at most 1 time
            totalExperience += static_cast<long long>(times) * a[i];  // Experience for the first completion

            times = min(k - completedQuests, i);  // Complete each subsequent quest at most i times
            totalExperience += static_cast<long long>(times) * b[i];  // Experience for subsequent completions

            completedQuests += times;
        }

        cout << totalExperience << endl;
    }

    return 0;
}