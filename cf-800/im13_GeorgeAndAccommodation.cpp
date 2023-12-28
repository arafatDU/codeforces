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

    int n, count=0;
    cin>>n;
    while(n--){
        int a, b;
        cin>>a>>b;
        if(b-a >= 2) count++;
    }
    cout<<count<<endl;

    return 0;
}