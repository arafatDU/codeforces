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
  int n, maximum = 0, k, i = 1, count_level, a[2002];

  for (std::cin >> n; i <= n;)
    std::cin >> a[i++];

  for (i = 1; i <= n;)
  {
    k = a[i++], count_level = 0;
    while (k > 0)
      k = a[k], count_level++;
    maximum = count_level > maximum ? count_level : maximum;
  }

  std::cout << maximum + 1;

  return 0;
}