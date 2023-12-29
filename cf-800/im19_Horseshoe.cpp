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
    int s1, s2, s3, s4;
    cin>>s1>>s2>>s3>>s4;
    set<int>s{s1, s2, s3, s4};
    cout<<4-s.size()<<endl;
    
 
    return 0;
}