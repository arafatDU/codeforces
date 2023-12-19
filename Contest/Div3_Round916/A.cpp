#include <bits/stdc++.h>

using namespace std;


#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a,i<b;i++)
#define ff first
#define ss second


int main() {

    #ifdef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    int letterCount[26];

    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string contestLog;
        cin >> contestLog;

        int problemsSolved = 0;
        std::fill(letterCount, letterCount + 26, 0);

        for (int i = 0; i < n; ++i) {
            int index = contestLog[i] - 'A';
            letterCount[index]++;
        }

        for(int i=0; i<26; i++) {
            //cout<<letterCount[i]<<" ";
            if(letterCount[i] >= i+1) problemsSolved++;
        }

        cout << problemsSolved << endl;
    }

    return 0;
}
