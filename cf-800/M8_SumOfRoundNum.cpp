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
    int t, n, arr[5];
    cin>>t;
    while(t--){
        cin>>n;
        int i=0, ans=0;
        while(n){
            if(n/10000){
                ans++;
                arr[i] = (n/10000)*10000;
                n -= (n/10000)*10000;
            }else if(n/1000){
                ans++;
                arr[i] = (n/1000)*1000;
                n -= (n/1000)*1000;
            }else if(n/100){
                ans++;
                arr[i] = (n/100)*100;
                n -= (n/100)*100;
            }else if(n/10){
                ans++;
                arr[i] = (n/10)*10;
                n -= (n/10)*10;
            }else{
                ans++;
                arr[i] = n;
                n -= n;
            }
            i++;
        }
        cout<<ans<<endl;
        for(int j=0; j<i; j++)cout<<arr[j]<<" ";
        cout<<endl;


        /*
        int n,p,c=0,i=1;
        cin>>n;
        p=n;
        while(p) {if(p%10)c++;p/=10;}
        cout<<c<<endl;
        while(n) {if(n%10)cout<<(n%10)*i<<" ";
            n/=10;i*=10;}
        cout<<endl;
        */
    }

    return 0;
}