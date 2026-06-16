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
      int n, x, maxDistance=0;
      cin>>n>>x;
      vector<int> a(n+2);
      a[0] = 0;
      for(int i=1; i<=n; i++) {
        cin>>a[i];
      }
      a[n+1] = x;

      for(int i=1; i<=n+1; i++) {
        int distance = a[i] - a[i-1];
        if(i == n+1) distance *= 2;
        maxDistance = max(maxDistance, distance);
      }
      cout << maxDistance << endl;
    }

    return 0;
}