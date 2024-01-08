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
        int a, b, c;
        cin>>a>>b>>c;
        if(a == b+c) cout<<"YES"<<endl;
        else if(b == a+c) cout<<"YES"<<endl;
        else if(c == a+b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}