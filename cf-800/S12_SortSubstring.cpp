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
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        cout<<s[0];
        for(int i=1; i<s.length(); i+=2) cout<<s[i];
        cout<<endl;
    }

    return 0;
}