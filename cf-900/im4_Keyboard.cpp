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


/*
char x,c;string s="qwertyuiopasdfghjkl;zxcvbnm,./";
int main()
{
    cin>>x;
    while(cin>>c){
        cout<<s[s.find(c)-(x=='R')+(x=='L')];
    }
}
*/


int main()
{
    #ifdef ONLINE_JUDGE
          freopen("input.txt", "r", stdin);
          freopen("output.txt", "w", stdout);
    #endif
    string s1= "qwertyuiop", s2= "asdfghjkl;", s3= "zxcvbnm,./";
    char c;
    string s;
    cin>>c>>s;
    for(int i=0; i<s.length(); i++){
        if(c == 'R'){
            for(int j=0; j<s1.length(); j++){
                if(s[i] == s1[j]) cout<<s1[j-1];
                if(s[i] == s2[j]) cout<<s2[j-1];
                if(s[i] == s3[j]) cout<<s3[j-1];
            }
        }
        else{
            for(int j=0; j<s1.length(); j++){
                if(s[i] == s1[j]) cout<<s1[j+1];
                if(s[i] == s2[j]) cout<<s2[j+1];
                if(s[i] == s3[j]) cout<<s3[j+1];
            }
        }
    }
    
    return 0;
}
 