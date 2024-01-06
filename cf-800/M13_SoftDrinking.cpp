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
    int n, k, l, c, d, p, nl, np, drinkToToast, limeToToast, saltToToast;
    cin>>n>> k>> l>> c>> d>> p>> nl>> np;
    // drink = n * k,  can be make toast drink/(nl)
    drinkToToast = (k * l)/nl;
    // lime are enough for (c*d) toast
    limeToToast = c*d;
    // salt are enough for toast p/np
    saltToToast = p/np;
    // cout<<drinkToToast<<"  "<<limeToToast<<"  "<<saltToToast<<endl;
    cout<<min({drinkToToast, limeToToast, saltToToast})/n<<endl;

    return 0;
}