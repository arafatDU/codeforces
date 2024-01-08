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
    int n;
    cin>>n;
    int arr[n], first = 0, last = n-1, sum1 = 0, sum2 = 0;
    for(int i=0; i<n; i++) cin>>arr[i];

    // while(first != last){
    //     if(arr[first]>arr[last])
    // }
    for(int i=0; i<n; i++){
        if(i%2==0){
            if(arr[first]>arr[last]){
                sum1 += arr[first];
                first++;
            }else{
                sum1 += arr[last];
                last--;
            }
        }else{
            if(arr[first]>arr[last]){
                sum2 += arr[first];
                first++;
            }else{
                sum2 += arr[last];
                last--;
            }
        }
    }
    cout<<sum1<<" "<<sum2<<endl;

    return 0;
}