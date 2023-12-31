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
    int n;
    cin>>n;
    cout<<n/100+n/20%5+n/10%2+n/5%2+n%5;

    // int count=0
    // while(n){
    //     if(n>=100){
    //         count += (n/100);
    //         n -= 100*(n/100);
    //     }else if(n>=20 && n<100){
    //         count += (n/20);
    //         n -= 20*(n/20);
    //     }else if(n>=10 && n<20){
    //         count += (n/10);
    //         n -= 10*(n/10);
    //     }else if(n>=5 && n<10){
    //         count += (n/5);
    //         n -= 5*(n/5);
    //     }else{
    //         count += n;
    //         n -= n;
    //     }
    // }
    // cout<<count<<endl;

    return 0;
}