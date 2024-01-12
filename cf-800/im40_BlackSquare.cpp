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
    int a1, a2, a3, a4, ans=0;
    string s;
    cin>>a1>>a2>>a3>>a4>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '1') ans += a1;
        else if(s[i] == '2') ans += a2;
        else if(s[i] == '3') ans += a3;
        else ans += a4;
    }
    cout<<ans<<endl;

    return 0;
}