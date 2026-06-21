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
    int t;
    cin>>t;
    while(t--) {
      int n, count_negative = 0, count_positive = 0, operations = 0;
      cin>>n;
      vector<int> a(n);
      for(int i=0; i<n; i++) {
        cin>>a[i];
        if(a[i] < 0) {
          count_negative++;
        } else if(a[i] > 0) {
          count_positive++;
        }
      }
      int difference = count_negative - count_positive;
      if(difference > 0) {
        operations = (difference%2 == 0) ? difference / 2 : (difference / 2) + 1;
      }
      count_negative -= operations;

      if(count_negative%2 == 0) {
        cout<<operations<<endl;
      } else {
        cout<<operations + 1<<endl;
      }

    }

    return 0;
}