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
      int point=0;
      char box[10][10];
      for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            cin>>box[i][j];
            if(box[i][j] == 'X') {
                if(i==0 || i==9 || j==0 || j==9) {
                    point++;
                }
                else if(i==1 || i==8 || j==1 || j==8) {
                    point+=2;
                }
                else if(i==2 || i==7 || j==2 || j==7) {
                    point+=3;
                }
                else if(i==3 || i==6 || j==3 || j==6) {
                    point+=4;
                }
                else if(i==4 || i==5 || j==4 || j==5) {
                    point+=5;
                }
            }
        }
      }
      cout<<point<<endl;
    }

    return 0;
}