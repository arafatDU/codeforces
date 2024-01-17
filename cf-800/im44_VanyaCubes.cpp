#include<bits/stdc++.h>
using namespace std;

#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define ll long long

int main()
{
    #ifdef ONLINE_JUDGE
          freopen("input.txt", "r", stdin);
          freopen("output.txt", "w", stdout);
    #endif
    int n, prevSum=0, curr=0, ans=0;
    cin>>n;
    while(n>=0){
        curr++;
        prevSum += curr;
        n -= prevSum;
    }
    cout <<curr-1<< endl;
    
    return 0;
}