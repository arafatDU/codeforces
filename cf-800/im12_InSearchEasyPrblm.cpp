#include<bits/stdc++.h>
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

    int n;
    bool isEasy = true;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        if(a == 1) isEasy = false;
    }
    puts(isEasy ?"EASY":"HARD");

    return 0;
}