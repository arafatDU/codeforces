#include<bits/stdc++.h>
using namespace std;

#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

int letters[26];
int main()
{
    #ifdef ONLINE_JUDGE
          freopen("input.txt", "r", stdin);
          freopen("output.txt", "w", stdout);
    #endif
    
    string a, b, c;
    cin>>a>>b>>c;
    a += b;
    sort(a.begin(), a.end());
    sort(c.begin(), c.end());

    cout<<(a == c?"YES":"NO");


    // string s;
    // cin>>s;
    // for(int i=0; i<s.length(); i++) letters[s[i]-'A']++;
    // cin>>s;
    // for(int i=0; i<s.length(); i++) letters[s[i]-'A']++;
    // cin>>s;
    // for(int i=0; i<s.length(); i++) letters[s[i]-'A']--;

    // for(int i=0; i<26; i++){
    //     if(letters[i]){
    //         cout<<"NO"<<endl;
    //         return 0;
    //     }
    // }
    // cout<<"YES"<<endl;

    return 0;
}