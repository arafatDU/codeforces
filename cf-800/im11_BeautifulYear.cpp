#include<bits/stdc++.h>
using namespace std;


#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a,i<b;i++)
#define ff first
#define ss second


int main() {
    #ifdef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    while(++n){
        int d1 = n%10;
        int d2 = (n/10)%10;
        int d3 = (n/100)%10;
        int d4 = (n/1000)%10;
        if(d1!=d2 && d1!=d3 && d1!=d4 && d2!=d3 && d2!=d4 && d3!= d4) break;
    }
    cout<<n<<endl;
}