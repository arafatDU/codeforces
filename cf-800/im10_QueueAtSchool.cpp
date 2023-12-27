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

    int n, t;
    string s;
    cin>>n>>t>>s;
    
    while(t--){
        for(int i=0; i<n-1; i++){
            if(s[i] == 'B' && s[i+1] == 'G'){
                swap(s[i], s[i+1]);
                i++;
            }
        }
    }
    cout<<s<<endl;
}