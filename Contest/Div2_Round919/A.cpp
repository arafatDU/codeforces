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
        int n, a, b, min=INT_MAX, max=INT_MIN, ans=0;
        cin>>n;
        vi type3(n);
        for(int i=0; i<n; i++){
            cin>>a>>b;
            if(a == 1){
                if(b > max) max = b;
            } else if(a == 2){
                if(b < min) min = b;
            }else{
                type3.push_back(b);
            }
        }
        ans = (min - max) + 1;
        //cout<<"Min: "<<min<<"   max: "<<max<<endl;
        for(auto a: type3) {
            if(a >= max && a <= min) ans--;
        }
        if(ans<0) ans =0;
        cout<<ans<<endl;
    }

    return 0;
}