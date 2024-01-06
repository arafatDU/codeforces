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
    int arr[4];
    for(int i=0; i<4; i++) cin>>arr[i];

    sort(arr, arr+4);
    for(int i=0; i<3; i++){
        cout<<arr[3]-arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}