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
    while(t--){
      int x, n, m;
      cin>>x>>n>>m;
      
      while(x>20 && n--) x = floor(x/2) + 10;
      cout<<( x<=m*10? "YES":"NO")<<endl;
    }

    return 0;
}