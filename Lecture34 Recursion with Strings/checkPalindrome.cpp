#include<bits/stdc++.h>
using namespace std;
bool palindrome(string &s,int i,int j){
    if(i>j){
        return true;
    }

    if(s[i]!=s[j]){
        return false;
    }

    i++;
    j--;
    return palindrome(s,i,j);
}
int main(){
string s="abccba";

cout<<palindrome(s,0,s.length()-1)<<endl;
cout<<endl;
return 0;
}