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
        int n;
        cin>>n;
        if(n >= 1900) cout<<"Division 1"<<endl;
        else if(n >= 1600) cout<<"Division 2"<<endl;
        else if(n >= 1400) cout<<"Division 3"<<endl;
        else cout<<"Division 4"<<endl;
    }

    return 0;
}