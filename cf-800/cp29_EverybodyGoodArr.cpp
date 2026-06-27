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
      ll n, operation_count=0;
      cin>>n;
      vector<ll> a(n);
      for(int i=0;i<n;i++) {
        cin>>a[i];
      }
      for(int i=1; i<n; i++) {
        if(a[i]%2 == a[i-1]%2) {
          operation_count++;
        }
      }
      cout<<operation_count<<endl;
    }

    return 0;
}