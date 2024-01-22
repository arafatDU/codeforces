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
    int n, a, b, count=1, ans=INT_MIN;
    cin>>n>>a;
    for(int i=1; i<n; i++){
        cin>>b;
        if(b>=a){
            count++;
        }else{
            ans = max(ans, count);
            count = 1;
        }
        a = b;
    }
    ans = max(ans, count);
    cout << ans << endl;
    
    return 0;
}


/*
#import<iostream>
using namespace std;
int m,n,t,x,y;
int main()
{
    for(cin>>n>>x;--n;y<x?t=0:++t<m?:m=t,x=y)
    cin>>y;
    cout<<m+1;
}

*/