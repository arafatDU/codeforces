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
    int arr[n];
    //for(int i=0; i<n; i++)cin>>arr[i];
    //cout<<max_element(arr, arr + n) - arr<<endl;
    int minIndex = 0; 
    int maxIndex = 0; 
    cin>>arr[0];
    for (int i = 1; i < n; ++i) {
        cin>>arr[i]; 
        if (arr[i] <= arr[minIndex]) { 
            minIndex = i; 
        } 
 
        if (arr[i] > arr[maxIndex]) { 
            maxIndex = i; 
        } 
    } 
    if(minIndex < maxIndex){
        cout<<(maxIndex + n - minIndex -2)<<endl;
    }else{
        cout<<(maxIndex + n - minIndex -1)<<endl;
    }


    return 0;
}