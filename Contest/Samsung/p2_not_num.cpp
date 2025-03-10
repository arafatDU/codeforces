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
    int t, days;
    cin >> t;
    while(t--) {
      bool isConsistent = true;
      cin >> days;
      int M, Q, R;
      int constArr[5] = {2, 2, 2, 1, 3};
      for(int i = 0; i < 5; i++) {
        cin >> M >> Q >> R;
        if(M != constArr[i] || Q != 3 || R != 10) {
          isConsistent = false;
        }
      }
      if(isConsistent) {
        cout << "Consistent" << endl;
      } else {
        cout << "Inconsistent" << endl;
      }

    }

    return 0;
}