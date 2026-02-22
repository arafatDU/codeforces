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

int f(ll n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    int left = f(n-1) + 1;
    int right = f(n-2) + 1;
    
    return min(left, right);
}

void generate_paths(int current, vector<int>& path, int n, vector<vector<int>>& arr) {
    if (current == n) {
        arr.push_back(path);
        return;
    }
    if (current + 1 <= n) {
        path.push_back(current + 1);
        generate_paths(current + 1, path, n, arr);
        path.pop_back();
    }
    if (current + 2 <= n) {
        path.push_back(current + 2);
        generate_paths(current + 2, path, n, arr);
        path.pop_back();
    }
}

int main()
{
    #ifdef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ll n, m;
    cin>>n>>m;
    if(m > n) {
        cout<<-1<<endl;
        return 0;
    }
    ll min_steps = n%2 ? (n/2 + 1) : (n/2);
    if(min_steps%m == 0) {
        cout<<min_steps<<endl;
    }
    else {
        cout<<min_steps + (m - min_steps%m)<<endl;
    }
    
    return 0;
}