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
    int t;
    cin>>t;
    while(t--){
        int n, diff=INT_MAX;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        sort(arr, arr+n);
        for(int i=1; i<n; i++) diff = min(diff, arr[i]-arr[i-1]);
        cout << diff << endl;
    }
    return 0;
}