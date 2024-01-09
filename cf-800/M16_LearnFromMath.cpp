#include<bits/stdc++.h>
using namespace std;

#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second


bool isPrime(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0) return false;
    }
    return true;
}

int main()
{
    #ifdef ONLINE_JUDGE
          freopen("input.txt", "r", stdin);
          freopen("output.txt", "w", stdout);
    #endif
    // int n, a, b;
    // cin >> n;
    // a = 4;
    // b = n - 4;
    // while(isPrime(a) || isPrime(b)){
    //     a++;
    //     b--;
    // }
    // cout << a <<" "<< b << endl;

    int n;
    cin>>n;
    cout<<8+n%2<<" "<<(n-8-n%2);

    return 0;
}