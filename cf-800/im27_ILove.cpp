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
    int n, a, max, min, ans=0;
    cin>>n>>a;
    max = a;
    min = a;
    for(int i=1; i<n; i++){
        cin>>a;
        if(a > max){
            ans++;
            max = a;
        }
        if(a < min){
            ans++;
            min = a;
        }
    }
    cout<<ans<<endl;

    return 0;
}