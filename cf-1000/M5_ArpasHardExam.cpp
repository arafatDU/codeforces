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


ll power(ll base, ll n, ll mod) {
    ll res=1;
    while (n) {
        if (n%2){
            res = (res * base) % mod;
            n--;
        }
        else {
            base = (base * base) % mod;
            n /= 2;
        }
    }
    return res;
}

int main()
{
    #ifdef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ll n;
    cin>>n;
    cout<<power(8, n, 10)<<endl;

    return 0;
}



/*
if a congruent b mod m (a % m = b % m)
then a^n congruent b^n mod m (a^n % m = b^n % m)

calculate a^n using log(n) time using binary exponentiation

(a * b) % m = ((a % m) * (b % m)) % m
so 1038^n % 10 = (8^n) % 10

*/