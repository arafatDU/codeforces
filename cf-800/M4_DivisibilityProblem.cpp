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
	int t;
	int a,b, i;
	cin>>t;
 
	for(i=0; i<t; i++) {
		cin>>a>>b;
 
		if(a%b == 0) cout<<0<<endl; 
		else cout<<(b-(a%b))<<endl;
	}
 
	return 0;
}