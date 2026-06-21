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
      int n, min_distance_of_two=INT_MAX;
      bool not_sorted=false;
      cin>>n;
      vector<int> a(n);
      for(int i=0; i<n; i++) cin>>a[i];
      for(int i=1; i<n; i++) {
        if(a[i]<a[i-1]) {
            not_sorted=true;
            break;
        }
        min_distance_of_two=min(min_distance_of_two, a[i]-a[i-1]);
      }

      if(not_sorted) cout<<0<<endl;
      else cout<<min_distance_of_two/2+1<<endl;

    }

    return 0;
}