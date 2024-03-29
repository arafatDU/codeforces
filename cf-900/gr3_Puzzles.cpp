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
    int n, m, ans = INT_MAX;
    cin>>n>>m;
    int arr[m];
    for(int i=0; i<m; i++) cin>>arr[i];
    sort(arr, arr+m);
    for(int i=0; i<m; i++){
        if(n+i <= m){
            ans = min(ans, arr[i+n-1]-arr[i]);
        }
    }
    cout<<ans<<endl;

    return 0;
}