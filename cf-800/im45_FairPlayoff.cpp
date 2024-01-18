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
        int s1, s2, s3, s4;
        cin>>s1>>s2>>s3>>s4;
        if(max(s1,s2)>min(s3,s4) && max(s3,s4)>min(s1,s2)) cout<<"YES\n";
		else cout<<"NO\n";
    }

    return 0;
}