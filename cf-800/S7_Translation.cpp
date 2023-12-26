#include <bits/stdc++.h>

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

    string berland, birland;
    cin>>berland>>birland;

    reverse(berland.begin(), berland.end());
    //cout<<berland<<endl<<birland<<endl;

    // Use of reverse iterators
    //string rev = string(berland.rbegin(), berland.rend());
    
    if(!berland.compare(birland)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}