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
    int n, p;
    float sum=0;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>p;
        sum += p;
    }
    cout<<(sum/n)<<endl;
 
    return 0;
}