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

/*
int n,a,i,e,o,l,w;
int main()
{
    cin>>n;
    for(;i<n;i++)cin>>a,a%2?o++,l=i+1:(e++,w=i+1);
    cout<<(e==1?w:l);
}

*/


int main()
{
    #ifdef ONLINE_JUDGE
          freopen("input.txt", "r", stdin);
          freopen("output.txt", "w", stdout);
    #endif
    int n, index=-1;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int i=1; i<n-1; i++) if(arr[i]%2 != arr[i-1]%2 && arr[i]%2 != arr[i+1]%2) index=i+1;
    if(arr[0]%2 != arr[1]%2 && arr[0]%2 != arr[2]%2) index=1;
    if(arr[n-1]%2 != arr[n-2]%2 && arr[n-1]%2 != arr[n-3]%2) index=n;
    cout << index << endl;
    
    return 0;
}