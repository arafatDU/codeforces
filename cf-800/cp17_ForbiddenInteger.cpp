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
      int n, k, x;
      cin>>n>>k>>x;
      if(x != 1) {
        cout<<"YES\n";
        cout<<n<<endl;
        for(int i=0; i<n; i++) {
          cout<<"1 ";
        }
        cout<<endl;
      }
      else {
        if(k == 1) {
          cout<<"NO"<<endl;
        }
        else if(k == 2 && n%2 != 0) {
          cout<<"NO"<<endl;
        }
        else {
          cout<<"YES\n";
          if(n%2 == 0) {
            cout<<n/2<<endl;
            for(int i=0; i<n/2; i++) {
              cout<<"2 ";
            }
            cout<<endl;
          }
          else {
            cout<<((n-3)/2)+1<<endl;
            for(int i=0; i<(n-3)/2; i++) {
              cout<<"2 ";
            }
            cout<<"3\n";
          }
        }
      }
    }

    return 0;
}