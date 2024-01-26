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
        ll n, ans=0;
        cin>>n;
        while(n%6 == 0){n/=6; ans++;}
        while(n%3 == 0){n/=3;ans+=2;}
        if(n!=1)ans=-1;
        cout<<ans<<endl;
    }

    return 0;
}