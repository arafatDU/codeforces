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
        int a, b, side;
        cin>>a>>b;
        side = 2*min(a, b);
        cout<<(side>=max(a, b)? pow(side, 2) : pow(max(a, b), 2))<<endl;
    }

    return 0;
}