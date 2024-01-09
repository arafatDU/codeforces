#include<bits/stdc++.h>
using namespace std;

#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second


int main()
{
    #ifdef ONLINE_JUDGE
          freopen("input.txt", "r", stdin);
          freopen("output.txt", "w", stdout);
    #endif
    int n, a, k;
    cin>>n;
    vi a1, a2, a3;
    for(int i=1; i<=n; i++){
        cin>>a;
        if(a == 1) a1.push_back(i);
        else if(a == 2) a2.push_back(i);
        else a3.push_back(i);
    }
    
    cout<<min({a1.size(),a2.size(),a3.size()})<<endl;
    for(int i=0; i<min({a1.size(),a2.size(),a3.size()}); i++ ){
        cout<<a1[i]<<" "<<a2[i]<<" "<<a3[i]<<endl;
    }
    return 0;
}