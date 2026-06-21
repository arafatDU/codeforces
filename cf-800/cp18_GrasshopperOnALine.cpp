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
      ll x, k;
      cin>>x>>k;
      if(x%k != 0) {
        cout<<1<<endl;
        cout<<x<<endl;
      }
      else {
        cout<<2<<endl;
        cout<<x-1<<" "<<1<<endl;
      }
    }

    return 0;
}