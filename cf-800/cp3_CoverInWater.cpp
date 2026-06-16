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
      int n, count=0, total_empty_cell=0;
      bool three_consecutive_empty_cell=false;
      cin>>n;
      for(int i=0; i<n; i++) {
        char a;
        cin>>a;
        if(a=='#') {
          count=0;
        }
        else {
          count++;
          total_empty_cell++;
          if(count>=3) three_consecutive_empty_cell=true;
        }
      }
      if(three_consecutive_empty_cell) cout<<2<<endl;
      else cout<<total_empty_cell<<endl;
    }

    return 0;
}