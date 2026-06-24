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
      int n;
      cin>>n;
      string s;
      cin>>s;
      int l=0,r=n-1, ans=n;
      while(l<r) {
        if(s[l]==s[r]) break;
        ans -= 2;
        l++;
        r--;
      }
      cout<<ans<<endl;
    }

    return 0;
}