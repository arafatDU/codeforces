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
    int n, m, ans=0;
    cin>>n>>m;

    // cout<<(n*m-1)/(m-1);

    for(int i=1; i<=n; i++){
        ans++;
        if(i%m == 0) n++;
    }
    cout << ans << endl;
    
    return 0;
}