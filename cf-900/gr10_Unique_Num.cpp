#include <bits/stdc++.h>
using namespace std;

#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
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
  cin >> t;
  while (t--)
  {
    int n, ans = 0, p = 1;
    cin>>n;
    for (int i = 9; i; i--)
      if (n >= i) n -= i, ans += p * i, p *= 10;
    if (n)
      cout<<-1<<endl;
    else
      cout<<ans<<endl;
  }

  return 0;
}