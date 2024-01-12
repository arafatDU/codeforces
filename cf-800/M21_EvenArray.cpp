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
        int n, a, even=0, odd=0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a;
            if(i%2 == 0 && a%2 != 0) even++;
            if(i%2 != 0 && a%2 == 0) odd++;
        }
        if(even-odd == 0) cout<<(even + odd)/2<<endl;
        else cout<<-1<<endl;
    }

    return 0;
}