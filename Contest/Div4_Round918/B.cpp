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
    int t, index=0;
    char a, b, c, ans;
    cin>>t;
    while(t--){
        for(int i=0; i<3; i++){
            cin>>a>>b>>c;
            if(a == '?'){
                if(b != 'A' && c != 'A') ans = 'A';
                else if(b != 'B' && c != 'B') ans = 'B';
                else ans = 'C';
            }
            if(b == '?'){
                if(a != 'A' && c != 'A') ans = 'A';
                else if(a != 'B' && c != 'B') ans = 'B';
                else ans = 'C';
            }
            if(c == '?'){
                if(b != 'A' && a != 'A') ans = 'A';
                else if(b != 'B' && a != 'B') ans = 'B';
                else ans = 'C';
            }
        }
        cout<<ans<<endl;
    }
 
    return 0;
}