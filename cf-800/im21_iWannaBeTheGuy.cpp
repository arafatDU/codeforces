#include<bits/stdc++.h>
using namespace std;
 

#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a,i<b;i++)
#define ff first
#define ss second

int n, p, q, k, level[101];

int main() {
    #ifdef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    cin>>n>>p;
    while(p--){
        cin>>k;
        if(!level[k]){
            n -= 1;
            level[k]++;
        }
    }
    cin>>q;
    while(q--){
        cin>>k;
        if(!level[k]){
            n -= 1;
            level[k]++;
        }
    }
    cout<<(n? "Oh, my keyboard!\n":"I become the guy.\n");
 
    return 0;
}