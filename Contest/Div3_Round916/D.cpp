#include <bits/stdc++.h>

using namespace std;


#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a,i<b;i++)
#define ff first
#define ss second

/*
    #ifdef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
*/


int main() {
    #ifdef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        pii a[n], b[n], c[n];

        for(int i = 0; i < n; i++){ cin>> a[i].ff; a[i].ss = i;}
        for(int i = 0; i < n; i++){ cin>> b[i].ff; b[i].ss = i;}
        for(int i = 0; i < n; i++){ cin>> c[i].ff; c[i].ss = i;}
        
        sort(a, a+n);
        sort(b, b+n);
        sort(c, c+n);

        int ans = 0;
        for(int i= n-1; i>=n-3; i--){
            for(int j = n-1; j>=n-3; j--){
                if(a[i].ss != b[j].ss){
                    for(int k = n-1; k>=n-3; k--){
                        if(c[k].ss != b[j].ss && c[k].ss != a[i].ss){
                            ans = max(ans, a[i].ff + b[j].ff + c[k].ff);
                        }
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}