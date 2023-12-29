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
    string s1, s2;
    cin>>s1>>s2;
    for(int i=0; i<s1.length(); i++){
        if(s1[i] != s2[i]) cout<<"1";
        else cout<<"0";
    }
    cout<<endl;
    
 
    return 0;
}