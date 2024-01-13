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
    int t;
    cin>>t;
    while(t--){
        long long n, k, x, sum=0; 
        cin>>n>>k>>x;
        long long arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum += arr[i];
        }
        sort(arr, arr+n);
        long long sumA=0;
        vi alice(k);
        for(int i=n-1; i>=n-k; i--){
            cout<<arr[i]<<" ";
            alice.push_back(-sumA);
            sumA += arr[i];
        }
        alice.push_back(-sumA);
        cout<<endl;
        for(auto a: alice) cout<<a<<" ";

    }

    return 0;
}