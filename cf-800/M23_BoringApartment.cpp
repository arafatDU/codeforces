#include<bits/stdc++.h>
using namespace std;

#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second


int main()
{
    #ifdef ONLINE_JUDGE
          freopen("input.txt", "r", stdin);
          freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
       string s;
       int ans=0;
       cin>>s;
       ans = 10*(s[0]-'1');
       for(int i=1; i<=s.length(); i++) ans+=i;
       cout<<ans<<endl; 
    }

    return 0;
}