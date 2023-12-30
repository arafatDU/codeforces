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
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        // Calculate the product of a and b
        long long product = static_cast<long long>(a) * b;

        // Find the smallest divisor c such that a < c < b
        for (int c = a + 1; c < b; ++c) {
            if (product % c == 0) {
                // Output the found value of x
                cout << product / c << endl;
                break;
            }
        }
    }

    return 0;
}