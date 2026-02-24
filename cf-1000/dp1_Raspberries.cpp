#include<bits/stdc++.h>
using namespace std;

#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define ll long long


int main()
{
    #ifdef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--) {
        ll n, k, ans = INT_MAX, even_count = 0;
        cin>>n>>k;
        ll a[n];
        for(int i=0; i<n; i++) {
            cin>>a[i];
            if(a[i]%2 == 0) even_count++;
            if(a[i]%k == 0) {
                ans = 0;
            }
            ans = min(ans, k - a[i]%k);
        }

        if(k==4) {
            if(even_count >= 2) ans = 0;
            else if(even_count == 1) ans = min(ans, 1LL);
            else ans = min(ans, 2LL);
        }
        cout<<ans<<endl;
    }
    
    return 0;
}