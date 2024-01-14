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

    int t;
    cin>>t;
    while(t--){
        int n, c1, c2;
        cin>>n;
        c1 = n/3;
        c2 = n/3;
        if( n%3 == 1) c1++;
        if( n%3 == 2) c2++;
        
        cout << c1 << " " << c2 << endl;
    }

    return 0;
}