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
      ll n;
      cin>>n;
      vector<ll> a(n);
      for(int i=0;i<n;i++) {
        cin>>a[i];
      }
      sort(a.begin(),a.end());
      ll min_num = a[0];
      ll max_num = a[n-1];

      if(min_num == max_num) {
        cout<<"NO"<<endl;
      }
      else {
        cout<<"YES"<<endl;
        cout<<max_num<<" ";
        for(int i=0;i<n-1;i++) {
          cout<<a[i]<<" ";
        }
        cout<<endl;
      }

    }

    return 0;
}