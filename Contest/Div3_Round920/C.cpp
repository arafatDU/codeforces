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
        ll n, f, a, b, curr, prev=0;
        cin>>n>>f>>a>>b;
        
        for(ll i=0; i<n; i++){
            cin>>curr;
            //cout<<"Charge: "<<f<<"   lose: "<<min((curr-prev)*a, b)<<endl;
            f -= min((curr-prev)*a, b);
            prev = curr;
        }
        if(f>0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}