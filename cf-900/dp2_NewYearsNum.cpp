//cout << (n/2020 < n%2020? "NO" : "YES") << '\n';

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
    /*#ifdef ONLINE_JUDGE
          freopen("input.txt", "r", stdin);
          freopen("output.txt", "w", stdout);
    #endif*/
    int t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n;
        k = n/2020;
        if((n- k*2020) <= k) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}