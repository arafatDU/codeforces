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
    while(t--) {
        ll n, total_xor=0;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
            total_xor ^= a[i];
        }
        if(n%2==0) {
            if(total_xor==0) {
                cout<<1<<endl;
            }
            else {
                cout<<-1<<endl;
            }
        }
        else {
            cout<<total_xor<<endl;
        }
    }

    return 0;
}