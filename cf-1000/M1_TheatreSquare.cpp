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


/*
    LOGIC
    6 6 4
    * * * * * * # # #
    * * * * * * # # #
    * * * * * * # # #
    * * * * * * # # #
    * * * * * * # # #
    * * * * * * # # #
    # # # # # # # # #
    # # # # # # # # #
    # # # # # # # # #

    (6-3)/4  *  (6-3)/4

*/

int main()
{
    #ifdef ONLINE_JUDGE
          freopen("input.txt", "r", stdin);
          freopen("output.txt", "w", stdout);
    #endif
    ll n, m, a;
    cin>>n>>m>>a;
    cout<<(n+a-1)/a*((m+a-1LL)/a)<<endl;

    return 0;
}