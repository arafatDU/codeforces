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
      int one=0, zero=0;
      string s;
      cin>>s;
      for(int i=0; i<s.size(); i++){
        if(s[i]=='1') one++;
        else zero++;
      }
      cout<<(min(one, zero)%2 ? "DA": "NET")<<endl;
    }

    return 0;
}