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


void toggleLetterCase(string &s){
  for(int i=0; i<s.length(); i++){
    if(s[i] >= 'a' && s[i] <= 'z'){
      s[i] += 'A' - 'a';
    }else{
      s[i] += 'a' - 'A';
    }
  }
}

int main()
{
    #ifdef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    string s;
    bool firstLower = false, allUpper = true;
    cin>>s;
    // Handling hELLO, cAPS with firstLower, then HTTP with allUper
    if(s[0] >= 'a' && s[0] <= 'z') {
      firstLower = true;
      allUpper = false;
    }

    for(int i=1; i<s.length(); i++){
      if(s[i] >= 'a' && s[i] <= 'z') {
        firstLower = false;
        allUpper = false;
      }
    }

    if(firstLower){
      toggleLetterCase(s);
      cout<<s<<endl;
    }else if(allUpper){
      toggleLetterCase(s);
      cout<<s<<endl;
    }else cout<<s<<endl;

    return 0;



    /*
  string s;bool f=1;
	cin>>s;
	for(int i=1;s[i++];)if(!(isupper(s[i-1]))){f=0;break;};
	if(f)for(int i=0;s[i++];)s[i-1]^=' ';
	cout<<s<<'\n';
    */
}