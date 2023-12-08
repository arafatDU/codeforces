#include<iostream>
using namespace std;

int main() {
    string s;
    cin>>s;
    //if(s[0]>96) s[0]-= 32;
    s[0] = toupper(s[0]);
    cout<<s<<endl;
    return 0;
}








/*
Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

Input
A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.

Output
Output the given word after capitalization.

Examples
inputCopy
ApPLe
outputCopy
ApPLe
inputCopy
konjac
outputCopy
Konjac

*/