#include<bits/stdc++.h>
using namespace std;

#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

// ----------------Regular Expression-----------
//    regex p("WUB");
//    cout<<regex_replace(str,p," ");

int main()
{
    #ifdef ONLINE_JUDGE
          freopen("input.txt", "r", stdin);
          freopen("output.txt", "w", stdout);
    #endif
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i += 2;
            cout<<" ";
            continue;
        }
        cout<<s[i];
    }

    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    regex p("WUB");
    cout<<regex_replace(s,p," ");

    return 0;
}
*/