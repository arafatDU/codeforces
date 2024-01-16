#include<bits/stdc++.h>
using namespace std;

#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second


int main()
{
    #ifdef ONLINE_JUDGE
          freopen("input.txt", "r", stdin);
          freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        int n, k, ans=0;
        cin>>n>>k;
        int a[n], b[n];
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];
        sort(a, a+n);
        sort(b, b+n, greater<int>());
        //for(int i=0; i<n; i++) cout<<a[i]<<" ";
        //cout<< endl;
        //for(int i=0; i<n; i++) cout<<b[i]<<" ";
        //cout<< endl;
        for(int i =0; i<k; i++){
            if(a[i] < b[i]) a[i] = b[i];
        }
        for(int i=0; i<n; i++) ans += a[i];
        cout << ans << endl;
    }

    return 0;
}