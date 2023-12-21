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

        int a[n], b[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        // Logic= always calculate pre_sum = 0 to i-th term
        // 1st time quest for 0 to i-th and rest of times (k - (i+1)) subsequence quest with the max of b[0] to b[i]
        // then ans = pre_sum + (k-(i+1)) time max of b[0] to b[i]
        // Do this thing for min(n, k) and everytime real ans will be the maximum ans.

        int mx = 0, pre_sum = 0, ans = 0;
        for(int i=0; i<min(n,k); i++){
            pre_sum += a[i];
            mx = max(mx, b[i]);
            ans = max(ans, pre_sum + (k-(i+1))*mx);
        }
        cout<<ans<<endl;
    }

    return 0;
}