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
#include <cstdio>
char A[10]="hello",a;
int i;
main(){
    while(scanf("%c",&a) && a!='\n')
        if(a == A[i])i++;
    printf(i==5 ? "YES" : "NO");}
*/


int main()
{
    #ifdef ONLINE_JUDGE
          freopen("input.txt", "r", stdin);
          freopen("output.txt", "w", stdout);
    #endif
    string s="hello", s1;
    int k=0, size=0;
    cin>>s1;
    for(int i=0; i<s.length(); i++){
        for(int j=k; j<s1.length(); j++){
            if(s1[j] == s[i]) { 
                //cout << s1[j]<< endl;
                k = j+1;
                size++;
                break;
            }
        }
    }
    cout<<(size==s.length()? "YES": "NO")<<endl;
    
    return 0;
}
 