// Binary Search ----> lower_bound(), upper_bound()
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

/*
int binarySearch(vi arr, int x, int low, int high) { 
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid] == x)
      return mid;

    if (arr[mid] > x)
      high = mid - 1;

    else
      low = mid + 1;
  }
  return min(low, high) ;
}


// lower_bound and upper_bound in vector
int main()
{
	int gfg[] = { 5, 5, 5, 6, 6, 6, 7, 7 };

	vector<int> v(gfg, gfg + 8); // 5 5 5 6 6 6 7 7

	vector<int>::iterator lower, upper;
	lower = lower_bound(v.begin(), v.end(), 6);
	upper = upper_bound(v.begin(), v.end(), 6);

	cout << "lower_bound for 6 at index "
		<< (lower - v.begin()) << '\n';
	cout << "upper_bound for 6 at index "
		<< (upper - v.begin()) << '\n';

	return 0;
}
OUTPUT: 
lower_bound for 6 at index 3
upper_bound for 6 at index 6

*/
int main()
{
    #ifdef ONLINE_JUDGE
          freopen("input.txt", "r", stdin);
          freopen("output.txt", "w", stdout);
    #endif
    ll n, q, m;
    cin>>n;
    vi arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr.begin(), arr.end());
    // for(int i=0; i<n; i++) cout<<arr[i]<<"  ";
    // cout<<endl;
    cin>>q;
    while(q--){
        cin>>m;
        cout<<upper_bound(arr.begin(), arr.end(), m) - arr.begin()<<endl;
    }

    return 0;
}