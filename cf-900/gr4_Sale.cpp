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
    int n, m, sum=0, ans=INT_MAX;
    cin>>n>>m;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr, arr+n);
    for(int i=0; i<m; i++){
        sum += arr[i];
        ans = min(ans, sum);
    }
    cout<<(ans < 0? ((-1)*ans): 0)<<endl;

    return 0;
}