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
      int n, count=0;
      cin>>n;
      while(n) {
        if(n/10 == 0) {
          count += n%10;
        }
        else {
          count += 9;
        }
        n /= 10;
      }
      cout<<count<<endl;
    }

    return 0;
}