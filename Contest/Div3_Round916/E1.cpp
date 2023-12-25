#include <bits/stdc++.h>

using namespace std;


#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a,i<b;i++)
#define ff first
#define ss second

/*
    First- every case Alice choose then 1 discard, sum+=a[i]-1
    Second-diff, if Bob choose this 1 discard & previously Alice choosed it, so extra -1
            diff[i] = a[i] + b[i] -2
    Third- sort diff for low to high
    Forth- start from (n-2)th and step-2 , 


    #define ll long long
 
void solve() {
    ll n, sum = 0;
    cin>>n;
 
    vector<ll> a(n), b(n), diff;
    for(int i=0;i<n;i++) cin>>a[i], sum += a[i]-1;
    for(int i=0;i<n;i++) cin>>b[i], diff.push_back(a[i]+b[i]-2);
    sort(diff.begin(), diff.end());
 
    for(int i=b.size()-2;i>=0;i-=2) {
        sum -= diff[i];
    }
    cout<<sum<<endl;   
}
 
int main() {
    int t;
    cin>>t;
 
    while(t--) solve();
    return 0;
}
*/


int main() {
    #ifdef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;

    while (t--) {
        long long n, sum=0;
        cin>>n;
        vector<long long> a(n), b(n), diff;

        for(int i=0; i<n; i++) cin>>a[i], sum += a[i]-1;
        for(int i=0; i<n; i++) cin>>b[i], diff.push_back(a[i]+b[i]-2);

        sort(diff.begin(), diff.end());
        for(int i=n-2; i>=0; i-=2){
            sum -= diff[i];
        }

        cout<<sum<<endl;
    }

    return 0;
}
