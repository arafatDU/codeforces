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
      ll n, k;
      cin>>n>>k;
      vector<ll> a(n);
      for(int i=0; i<n; i++) {
        cin>>a[i];
      }
      vector<ll> copy_a = a;
      sort(copy_a.begin(), copy_a.end());

      if(copy_a == a || k > 1) {
        cout<<"YES"<<endl;
      }
      else {
        cout << "NO" <<endl;
      }


    }

    return 0;
}