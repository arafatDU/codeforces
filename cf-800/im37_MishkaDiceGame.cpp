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
    int n, mishka=0, chris=0;
    cin>>n;
    while(n--){
        int a, b;
        cin>>a>>b;
        if(a > b) mishka++;
        if(b > a) chris++;
    }
    if(mishka > chris) cout<<"Mishka"<<endl;
    else if(chris > mishka) cout<<"Chris"<<endl;
    else cout<<"Friendship is magic!^^"<<endl;

    return 0;
}