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
    int k, a, sum=0, ans=-1;
    vi v(12);
    cin>>k;
    for(int i=0; i<12; i++) cin>>v[i];
    sort(v.begin(), v.end(), greater<int>());
    // for(int i=0; i<12; i++) cout<<v[i]<<"  ";
    // cout<<endl;

    for(int i=0; i<12; i++){
      sum += v[i];
      if(sum >= k){
        ans = i+1;
        break;
      }
    }

    cout<<(k==0? 0: ans)<<endl;

    return 0;
}