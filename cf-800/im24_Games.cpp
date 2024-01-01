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
    int n, ans=0;
    cin>>n;
    int h[n], g[n];
    for(int i=0; i<n; i++) cin>>h[i]>>g[i];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i != j){
                //cout<<h[i]<<"  ---  "<<g[j]<<endl;
                if(h[i] == g[j]) ans++;
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}