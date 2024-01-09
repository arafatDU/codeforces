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
    int t;
    cin>>t;
    int arr[10001];
    arr[0] = 0;
    // for(int i=1; i<=1000; i++){
    //     arr[i] = arr[i-1] + 1;
    //     if(arr[i]%3 == 0 || arr[i]%10 == 3) arr[i]++;
    //     if(arr[i]%3 == 0 || arr[i]%10 == 3) arr[i]++;
    // }
    
    while(t--){
        int n, ans=0;
        cin>>n;
        //cout<<arr[n]<<endl;
        while(n--){
            ans++;
            if(ans%3==0 || ans%10==3) ans++;
            if(ans%3==0 || ans%10==3) ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}



// Another logic increase n when get i as %3 or %10
/*
int t,n;
 int main(){
 cin>>t;
 while(t--){
  cin>>n;
  for(int i=1;i<=n;i++)
   if(i%3==0||i%10==3)n++;
  cout<<n<<endl;
 }
*/