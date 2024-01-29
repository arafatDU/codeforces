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
    int n, one=0, zero=0;
    cin>>n;
    char c;
    for(int i=0; i<n; i++){
        cin>>c;
        if(c == '1') one++;
        else zero++;
    }
    cout<< n - 2*min(one, zero) <<endl;
    
    return 0;
}
 
 
 