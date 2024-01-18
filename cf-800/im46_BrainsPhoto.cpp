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
    int n, m;
    char a;
    bool isBlack = true;
    cin>>n>>m;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++){
            cin>>a;
            if(a == 'C' || a == 'M' || a == 'Y') isBlack = false;
        }
        
    cout<<(isBlack? "#Black&White": "#Color")<<endl;        
    
    return 0;
}