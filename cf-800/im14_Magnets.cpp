#include<bits/stdc++.h>
using namespace std;


#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a,i<b;i++)
#define ff first
#define ss second


int main() {
    #ifdef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, a, b, count=1;
    cin>>n>>a;
    // int arr[n];
    // for(int i=0; i<n; i++) cin>>arr[i];
    // for(int i=1; i<n; i++) if(arr[i-1] != arr[i]) count++;
    
    for(int i=1; i<n; i++){
        cin>>b;
        if(a != b) count++;
        a = b;
    }
    
    cout<<count<<endl;

    return 0;
}