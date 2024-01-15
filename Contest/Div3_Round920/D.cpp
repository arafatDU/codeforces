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
    ll t;
    cin>>t;
    while(t--){
        ll n, m, diff=0;
        cin>>n>>m;
        ll arr1[n], arr2[m];
        for(int i=0; i<n; i++) cin>>arr1[i];
        for(int i=0; i<m; i++) cin>>arr2[i];
        sort(arr1, arr1+n, greater<int>());
        sort(arr2, arr2+m);
        for(int i=0; i<n; i++) diff += abs(arr2[i]-arr1[i]);
        cout<<diff<<endl;
    }

    return 0;
}