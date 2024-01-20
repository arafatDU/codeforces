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
        int n, m=INT_MAX;
        ll ans=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin>>arr[i];
            m=min(m, arr[i]);
        }
        for(int i=0; i<n; i++) ans += arr[i]-m;
        cout <<ans<< endl;
        

    }
    return 0;
}