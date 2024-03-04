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
    string s, ans;
    int n, maximum=INT_MIN;
    cin>>n>>s;
    map<string, int> mp;
    for(int i=0; i<n-1; i++){
      string temp;
      temp += s.substr(i, 2);
      mp[temp]++;
      //cout<<temp<<"  "<<mp[temp]<<endl;
    }

    for (auto& pair : mp) {
        if (pair.second > maximum) {
            maximum = pair.second;
            ans = pair.first;
        }
    }

    cout<<ans<<endl;

    return 0;
}