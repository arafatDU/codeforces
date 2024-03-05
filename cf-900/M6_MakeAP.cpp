// Arithmatic Progression (a(n) = a1 + (n-1)*d)
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
    while(t--){
      ll a, b, c, x;
      cin>>a>>b>>c;
      // a + b*x + c       (b*x - a) = (c - b*x)
      // a*x + b + c       (b - a*x) = (c - b)
      // a + b + c*x       (b - a) = (c*x - b)
      //x = (c + a)/(2*b);
      //x = (2*b - c)/a;
      //x = (2*b - a)/c;
      if((c + a)%(2*b)==0 || ((2*b - c)%a==0 && (2*b-c)>0) || ((2*b - a)%c==0 && (2*b-a)>0)){
        cout<<"YES"<<endl;
      }else {
        cout<<"NO"<<endl;
      }
    }

    return 0;
}