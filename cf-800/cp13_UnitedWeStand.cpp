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
      int n, min_of_a=INT_MAX;
      cin>>n;
      vector<int> a(n);
      vector<int> b,c;
      for(int i=0; i<n; i++) {
        cin>>a[i];
        min_of_a = min(min_of_a, a[i]);
      }

      for(int i=0; i<n; i++) {
        if(a[i] == min_of_a) b.push_back(a[i]);
        else c.push_back(a[i]);
      }

      if(b.size()==0 || c.size()==0) cout<<-1<<endl;
      else {
        cout<<b.size()<<" "<<c.size()<<endl;
        for(int i=0; i<b.size(); i++) cout<<b[i]<<" ";
        cout<<endl;
        for(int i=0; i<c.size(); i++) cout<<c[i]<<" ";
        cout<<endl;
      }
    }

    return 0;
}