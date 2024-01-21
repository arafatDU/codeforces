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
    ll n, k;
    cin>>n>>k;
    if(2*k-1 <= n) cout<< 2*k-1 <<endl;
    else cout<< 2*(k - n/2 - n%2) <<endl;
    
    return 0;
}