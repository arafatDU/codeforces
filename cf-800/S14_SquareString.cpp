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
        string s;
        cin>>s;
        if(s.length()%2 == 1) cout << "NO" << endl;
        else{
            if(s.substr(0, s.length()/2) == s.substr(s.length()/2)) cout<<"YES"<< endl;
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}