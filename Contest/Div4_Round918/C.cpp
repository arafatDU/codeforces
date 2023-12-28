#include<bits/stdc++.h>
using namespace std;
 

#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a,i<b;i++)
#define ff first
#define ss second



int main() {
    #ifdef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    long long t, n, sum, x;
    cin>>t;
    while(t--){
        cin>>n;
        sum =0;
        for(int i=0; i<n; i++){
            cin>>x;
            sum += x;
        }
        if (sqrt(sum) == int(sqrt(sum))) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
    return 0;
}