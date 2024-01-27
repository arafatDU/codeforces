// Binary Search, Math, impl, sorting
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


double maxOF3(double i, double j, double k){
    return i > j? (i > k? i: k): (j > k? j: k);
}

int main()
{
    #ifdef ONLINE_JUDGE
          freopen("input.txt", "r", stdin);
          freopen("output.txt", "w", stdout);
    #endif
    double n, l;
    int max_dif=INT_MIN;
    cin>>n>>l;
    vector<double> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    for(int i=1; i<n; i++) max_dif = max(max_dif, int(a[i]-a[i-1]));
    
    cout << fixed << setprecision(10) <<maxOF3(a[0]-0, (double)max_dif/2, l-a[n-1]) << endl;

    return 0;
}