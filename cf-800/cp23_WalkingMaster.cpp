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
      ll a, b, c, d, ans=-1;
      cin>>a>>b>>c>>d;
      if(d-b >= 0) {
        ans = d-b;
        a += (d-b);
        if(c > a) {
          ans = -1;
        }
        else {
          ans += (a-c);
        }
      }
      cout<<ans<<endl;
    }

    return 0;
}