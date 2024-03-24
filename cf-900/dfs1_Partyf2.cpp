#include <iostream>
int main()
{
  int n, m = 0, k, i = 1, c, a[2002];
  int ans=0;

  for (std::cin >> n; i <= n;)
    std::cin >> a[i++];

  for (i = 1; i <= n;i++)
  {
    if(ans<a[i]){
      ans = a[i];
    }
  }

  std::cout << ans+1;
}