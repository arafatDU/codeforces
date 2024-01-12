#include <bits/stdc++.h>
using namespace std;

#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
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
    while (t--)
    {
        int n, f = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != s[i + 1])
            {
                for (int j = i + 1; j < n; j++)
                    if (s[i] == s[j])
                        f = 1;
            }
        }
        if (f == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}