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
        if(tolower(s[i])=='a' || tolower(s[i])=='e' || tolower(s[i])=='i' || tolower(s[i])=='o'|| tolower(s[i])=='u'|| tolower(s[i])=='y')continue;
        else cout<<"."<<(char)tolower(s[i]);
    }

    return 0;
}