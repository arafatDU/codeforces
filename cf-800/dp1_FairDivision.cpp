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
        int n, a, one=0, two=0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a;
            if(a == 1) one++;
            else two++;
        }
        
        cout << ((one%2 || (two%2 && one<2))?"NO":"YES") << endl;

    return 0;
}