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
    while(t--) {
      int n, m, ans = -1;
      cin>>n>>m;
      string x, s;
      cin>>x>>s;
      for(int i=0; i<=5; i++) {
        
        if(n>=m) {
          if(x.find(s) != string::npos) {
            ans = i;
            break;
          }
        }
        n = n*2;
        x += x;
      }
      cout<<ans<<endl;
    }

    return 0;
}