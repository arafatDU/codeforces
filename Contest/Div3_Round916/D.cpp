#include <bits/stdc++.h>

using namespace std;


#define ONLINE_JUDGE
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a,i<b;i++)
#define ff first
#define ss second

/*
    #ifdef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
*/


int main() {
    #ifdef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        int a[n], b[n], c[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> b[i]; 
        }
        for(int i = 0; i < n; i++) {
            cin >> c[i];
        }
        
        int x, y, z;
        int maxSum = 0;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i == j) continue;
                
                for(int k = 0; k < n; k++) {
                    if(i == k || j == k) continue;
                    
                    int sum = a[i] + b[j] + c[k];
                    if(sum > maxSum) {
                        maxSum = sum;
                        x = i;
                        y = j; 
                        z = k;
                    }
                }
            }
        }
        
        cout << maxSum << "\n";
    }
    
    return 0;
}