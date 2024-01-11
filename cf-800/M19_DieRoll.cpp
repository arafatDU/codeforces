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
    int a, b, ans;
    cin>>a>>b;
    ans = (6 - max(a,b) +1);
    if(ans%6 == 0 && ans!=0){
        ans /= 6;
        cout<<ans<<"/"<<6/6<<endl; 
    }else if(ans%3 ==0){
        ans /= 3;
        cout<<ans<<"/"<<6/3<<endl;
    }else if(ans%2 ==0){
        ans /= 2;
        cout<<ans<<"/"<<6/2<<endl;
    }else{
        cout<<ans<<"/"<<6<<endl;
    }

    return 0;
}