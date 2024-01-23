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
    /*#ifdef ONLINE_JUDGE
          freopen("input.txt", "r", stdin);
          freopen("output.txt", "w", stdout);
    #endif*/
    int t;
    cin>>t;
    while(t--){
        ll n, x, k, sum, ans=INT_MIN;
        cin>>n>>k>>x;
        vi a(n), pSum(n+1);
        for(int i=0; i<n; i++) cin>>a[i];
        sort(a.begin(), a.end(), greater<int>());
        for(int i=1; i<=n; i++) pSum[i]=pSum[i-1]+a[i-1];
        sum = pSum[n];
        
        //for(int i=0; i<n; i++) cout<<a[i]<<" ";
        //cout<<endl;
        //for(int i=1; i<=n; i++) cout<<pSum[i]<<" ";
        //cout<<endl<<sum<<endl;
        
        for(int i=0; i<=k; i++){
            
            //cout<<sum<<"   2*"<<(pSum[min(n,x+i)]-pSum[i])<<endl;
            ans = max(ans, sum-2*(pSum[min(n,x+i)]-pSum[i]));
            sum -= a[i];
        }
        cout<<ans<<endl;
    }
    
    return 0;
}

