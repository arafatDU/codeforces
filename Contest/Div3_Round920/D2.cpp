#include <bits/stdc++.h>
using namespace std;
 
// #include <ext/pb_ds/assoc_container.hpp> 
// #include <ext/pb_ds/tree_policy.hpp> 
// using namespace __gnu_pbds; 
 
// #define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag, tree_order_statistics_node_update> 
// #define ordered_map tree<ll, ll, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
 
#define ll long long int
#define vi vector<ll>
#define vvi vector<vi>
#define pi pair<ll, ll>
#define vvpi vector<vector<pi>>
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define abs std::abs
#define fi first
#define se second
#define nline "\n"
#define sq(a) ((a) * (a))
#define sz(a) (ll) a.size()
#define pb push_back
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
const ll N = 1e7 + 10;
const ll M = 1e9 + 7;
 
void solve() {
 
    ll n, m;
    cin >> n >> m;
    vi a(n), b(m);
    for(auto &x : a)
        cin >> x;
    for(auto &x : b)
        cin >> x;
 
    multiset<ll> sa(all(a)), sb(all(b));
    ll ans = 0;
    while(!sa.empty()) {
        ll af = *sa.begin(), bf = *sb.rbegin(), ab = *sa.rbegin(), bb = *sb.begin();
        if(abs(bb - ab) > abs(bf - af)) {
            ans += abs(bb - ab);
            sa.erase(--sa.end());
            sb.erase(sb.begin());
        }
        else {
            ans += abs(bf - af);
            sa.erase(sa.begin());
            sb.erase(--sb.end());
        }
    }
    cout << ans << endl;
 
    // multiset<ll> st(all(b));
    // sort(all(a));
    // for(auto x : a) {
    //     if(abs(*st.begin() - x) >= abs(*(--st.end()) - x)) {
    //         cout << x << " " << *st.begin() << endl;
    //         ans += abs(*st.begin() - x);
    //         st.erase(st.begin());
    //     }
    //     else {
    //         cout << x << " " << *(--st.end()) << endl;
    //         ans += abs(*(--st.end()) - x);
    //         st.erase(--st.end());
    //     }
    // }
    // st.clear();
    // st.insert(all(b));
    // reverse(all(a));
    // ll ans2 = 0;
    // cout << endl;
    // for(auto x : a) {
    //     if(abs(*st.begin() - x) >= abs(*(--st.end()) - x)) {
    //         cout << x << " " << *st.begin() << endl;
    //         ans2 += abs(*st.begin() - x);
    //         st.erase(st.begin());
    //     }
    //     else {
    //         cout << x << " " << *(--st.end()) << endl;
    //         ans2 += abs(*(--st.end()) - x);
    //         st.erase(--st.end());
    //     }
    // }
    // cout << max(ans, ans2) << endl;
 
}
 
signed main() {
    fast
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    ll T;
    cin >> T;
    while(T--)
        solve();
    cerr << "Time:" << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}