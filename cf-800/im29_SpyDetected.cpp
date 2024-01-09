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
    cin >> t;
    while(t--){
        int n, eq, index;
        cin >> n;
        int arr[n];
        cin >> arr[0];
        eq = arr[0];
        for(int i=1; i<n; i++) {
            cin>>arr[i];
            if(arr[i]==arr[i-1]) eq = arr[i];
        }
        //cout << "Eq: "<<eq << endl;    
        for(int i=0; i<n; i++){
            if(arr[i]!=eq) index = i+1;
        }
        cout <<index<< endl;
    }

    return 0;
}