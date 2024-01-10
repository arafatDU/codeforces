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
        int n;
        cin>>n;
        // sum of 1st n(even): (n)(n - 1)
        // sum of 1st n(odd): n*n
        // Sum of even: (n/2)*(n/2 + 1)
        // Sum of odd(without last): (n/2 - 1)*(n/2 - 1) check that last is odd or even
        if(((n/2)*(n/2 + 1) - (n/2 - 1)*(n/2 - 1))%2 == 0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            for(int i=2; i<=n; i+=2) cout<<i<<" ";
            for(int i=1; i<n-1; i+=2) cout<<i<<" ";
            cout<<(n/2)*(n/2 + 1) - (n/2 - 1)*(n/2 - 1);
            cout<<endl;
        }

        /*Another easy algo
        cin>>n;if(n%4==0){
            cout<<"YES\n";
            for(int i=1;i<=n/2;i++)cout<<i*2<<' ';
            for(int i=1;i<n/2;i++)cout<<i*2-1<<' ';
            cout<<n+n/2-1<<'\n';}
        else cout<<"NO\n";
        */
    }

    return 0;
}