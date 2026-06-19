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
    int n, nearest_to_zerro=INT_MAX;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
      cin>>a[i];
      if(abs(a[i]) < nearest_to_zerro) {
        nearest_to_zerro = abs(a[i]);
      }
    }
    cout<<nearest_to_zerro<<endl;

    return 0;
}