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
    string s;
    int n, ans = 0;
    //cin>>n;

    for(cin>>n;n--;ans+=(s[0]=='T'?4:s[0]=='C'?6:s[0]=='O'?8:s[0]=='D'?12:20))
    {
        cin>>s;
    }

    // while(n--){
    //     cin>>s;
    //     if(s == "Tetrahedron") ans += 4;
    //     else if(s == "Cube") ans += 6;
    //     else if(s == "Octahedron") ans += 8;
    //     else if(s == "Dodecahedron") ans += 12;
    //     else ans += 20;
    // }
    cout<<ans<<endl;

    return 0;
}