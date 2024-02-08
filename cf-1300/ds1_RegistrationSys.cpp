// map data structure
// mp[arafat] = 0  ---OK--- (++Increment = 1)
// mp[arafat] = 1;  ---NO--- mp[arafat1] = 0

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
    int n;
    cin>>n;
    map<string, int> mp;
    while(n--){
        string s;
        cin>>s;
        //cout<<"----"<<s<<"----"<<mp[s]<<endl;
        if(mp[s] == 0){
            cout << "OK" << endl;
        }else {
            cout<< s + to_string(mp[s])<<endl;
        }
        mp[s]++;
    }
    
    return 0;
}
 