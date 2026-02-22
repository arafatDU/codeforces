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
    int t;
    cin>>t;
    while(t--) {
        string s;
        int zero_count = 0, one_count = 0, ans = 0;
        cin>>s;
        for(char c : s) {
            if(c == '0') zero_count++;
            else one_count++;
        }
        for(int i=0; i<s.length(); i++) {
            if(s[i] == '0' && one_count > 0) {
                one_count--;
            }
            else if(s[i] == '1' && zero_count > 0) {
                zero_count--;
            }
            else {
                ans = s.size() - i;
                break;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0; 
}