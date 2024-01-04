#include<bits/stdc++.h>
using namespace std;

#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second


int main()
{
    #ifdef ONLINE_JUDGE
          freopen("input.txt", "r", stdin);
          freopen("output.txt", "w", stdout);
    #endif
    vi a(3);
    cin>>a[0]>>a[1]>>a[2];
    sort(a.begin(), a.end());
    //sort(a.begin(), a.end(), greater<int>());  descending order
    cout<<((a[1]-a[0])+(a[2]-a[1]))<<endl;

    return 0;
}