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
        int n, one=0, zero=0;
        cin>>n;
        string a, b;
        cin>>a>>b;
        for(int i=0; i<n; i++){
            if(a[i] != b[i]){
                if(a[i] == '1') one++;
                else zero++;
            }
        }
        //cout<<"One: "<<one<<"   Zero: "<<zero<<endl;
        cout<<min(one, zero) + abs(one - zero)<<endl;

    }

    return 0;
}