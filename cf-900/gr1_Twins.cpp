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
    ll n, sum=0, totalSum=0, ans=0;
    cin>>n;
    ll arr[n];
    for(int i=0; i<n; i++) cin>>arr[i], totalSum += arr[i];
    //cout << totalSum << endl;
    sort(arr, arr+n, greater<int>());
    for(int i=0; i<n; i++) {
        sum += arr[i];
        if(sum > totalSum/2) {
            ans = i+1; 
            break;
        }
    }
    cout << ans << endl;
    
    return 0;
}