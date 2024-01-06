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
    int k, r, temp, ans=1;
    cin>>k>>r;
    temp = k;
    while(k%10!=0 && k%10 != r){
        ans++;
        k = temp*ans;
        //cout<<ans<<" "<<k<<endl;
    }
    cout<<ans<<endl;



    //while((k*i)%10!=r&&(k*i)%10!=0){i++;}std::cout << i;

    return 0;
}