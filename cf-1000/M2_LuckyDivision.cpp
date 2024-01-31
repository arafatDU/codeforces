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


/*
 n is less than 1000
 lucky num: 4, 7, 44, 47, 77, 444, 447, 474, 477, 744, 747, 777
 

*/

int main()
{
    #ifdef ONLINE_JUDGE
          freopen("input.txt", "r", stdin);
          freopen("output.txt", "w", stdout);
    #endif
    int l;
    cin>>l;
    cout<<(l%4==0||l%7==0||l%47==0||l%74==0||l%477==0 ? "YES":"NO");
    
    return 0;
}
 