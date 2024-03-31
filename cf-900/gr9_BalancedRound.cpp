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
      int n, k, c=0, maximum=0;
      cin>>n>>k;
      int arr[n], arrCheck[n];
      for(int i=0; i<n; i++){
        cin>>arr[i];
      }
      sort(arr, arr+n);
      for(int i=0; i<n-1; i++){
        if(arr[i+1]-arr[i] <= k){
          arrCheck[i] = 1;
        }
        else{
          arrCheck[i] = 0;
        }
      }
      // for(int i=0; i<n-1; i++){
      //   cout<<arrCheck[i]<<" ";
      // }
      // cout<<endl;
      for(int i=0; i<n-1; i++){
        if(arrCheck[i]==1){
          c++;
        }else{
          c=0;
        }
        maximum = max(c, maximum);
      }
      maximum++;
      cout<<n-maximum<<endl;
    }

    return 0;
}