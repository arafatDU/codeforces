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
      vector<int> a(n);
      vector<int> ans;
      for(int i=0; i<n; i++) cin>>a[i];
      ans.push_back(a[0]);
      for(int i=1; i<n; i++) {
        if(a[i] < a[i-1]) {
          ans.push_back(a[i]);
        }
        ans.push_back(a[i]);
      }
      
      cout<<ans.size()<<endl;
      for(int i=0; i<ans.size(); i++) {
        cout<<ans[i]<<" ";
      }
      cout<<endl;
    }

    return 0;
}