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
      int n, sum=0;
      cin>>n;
      vector<int> a(n-1);
      for(int i=0;i<n-1;i++) {
        cin>>a[i];
        sum += a[i];
      }
      cout<<-sum<<endl;
    }

    return 0;
}