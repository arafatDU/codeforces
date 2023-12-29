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
    int n;
    cin>>n;
    string s;
    for(int i=1; i<=n; i++){
        if(i%2 != 0) s+= "I hate ";
        if(i%2 == 0) s+= "I love ";
        if(n>1 && i !=n) s+= "that ";
    }
    s+= "it";
    cout<<s<<endl;
    
 
    return 0;
}