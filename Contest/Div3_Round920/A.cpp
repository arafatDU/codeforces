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
        int x[4], y[4], ans=INT_MAX;
        cin>>x[0]>>y[0];
        for(int i=1; i<4; i++){
            cin>>x[i]>>y[i];
            int temp = (pow((x[i]-x[0]), 2) + pow((y[i]-y[0]),2));
            ans = min( ans, temp);
        }
        cout<<ans<<endl;
    }

    return 0;
}