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
    int n, k, x, minimum=INT_MAX, sum=0, ans;
    cin>>n>>k;
    int sumArr[n];
    sumArr[0] = 0;
    for(int i=1; i<=n; i++) {
      cin>>x;
      sum += x;
      sumArr[i] = sum;
    }


    for(int i=0; i<=n-k; i++){
      //cout<< (sumArr[k+i] - sumArr[i]) <<" ";
      if((sumArr[k+i] - sumArr[i]) < minimum){
        minimum = (sumArr[k+i] - sumArr[i]);
        ans = i+1;
      }
    }

    cout<<ans<<endl;

    return 0;
}