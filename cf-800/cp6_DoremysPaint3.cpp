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


int main()
{
    #ifdef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        map<int,int> mp;
        for(int i=0; i<n; i++) {
            cin>>a[i];
            mp[a[i]]++;
        }
        int distinct_count = mp.size();
        int freq_of_min_num = mp.begin()->second;
        int freq_of_max_num = mp.rbegin()->second;
        if(distinct_count >= 3) {
            cout<<"NO"<<endl;
        }
        else if(distinct_count == 2) {
            if((freq_of_min_num == freq_of_max_num) || (n%2==1 && abs(freq_of_min_num - freq_of_max_num) == 1)) {
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
        else {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}