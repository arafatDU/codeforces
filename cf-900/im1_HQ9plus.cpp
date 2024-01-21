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
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    
    return 0;
}