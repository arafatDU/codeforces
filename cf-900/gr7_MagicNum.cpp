#include<bits/stdc++.h>
using namespace std;

#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define ll long long


int main()
{
    #ifdef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    string s;
    bool ans = true;
    cin>>s;
    for(int i=0; i<s.length(); i++){
      if(s[i] == '1'){
        if(s[i+1] == '4' && s[i+2] == '4') i+=2;
        else if(s[i+1] == '4') i+=1;
      }else{
        ans = false;
      }
    }
    cout<<(ans? "YES":"NO")<<endl;

    return 0;
}