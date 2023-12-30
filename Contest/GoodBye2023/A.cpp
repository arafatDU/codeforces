#include<bits/stdc++.h>
using namespace std;

#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

bool is_divisor(int x, int y) {
    return (y % x == 0);
}

vector<int> find_divisors(int n) {
    vector<int> divisors;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (is_divisor(i, n)) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    return divisors;
}

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    int product = 1;
    for (int i = 0; i < n; ++i) {
        product *= b[i];
    }

    vector<int> divisors = find_divisors(product);

    for (int i = 0; i < divisors.size(); ++i) {
        vector<int> removed;
        int remaining_product = 1;
        for (int j = 0; j < n; ++j) {
            if (b[j] % divisors[i] == 0) {
                removed.push_back(b[j] / divisors[i]);
            } else {
                remaining_product *= b[j];
            }
        }

        if (remaining_product == divisors[i] && removed.size() == k) {
            cout << "YES" << endl;
            for (int r : removed) {
                cout << r << " ";
            }
            cout << endl;
            return;
        }
    }

    cout << "NO" << endl;
}


int main()
{
    #ifdef ONLINE_JUDGE
          freopen("input.txt", "r", stdin);
          freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}