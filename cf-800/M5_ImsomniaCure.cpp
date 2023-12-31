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

	int d, k,l,m,n, count=0;
	cin>>k>>l>>m>>n>>d;
	for(int i=1; i<=d; i++){		
		if(i%k ==0 || i%l ==0 || i%m ==0 || i%n ==0) count++; 
	}
	cout<<count<<endl;

    return 0;
}