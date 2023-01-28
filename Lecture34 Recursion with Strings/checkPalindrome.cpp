#include<bits/stdc++.h>
using namespace std;
char toLower(char s){
    if(s>='a'&&s<='z'){
        return s;
    }
    else{
        return s-'A'+'a';
    }
}
bool checkPalindrome(string &str,int i){
    int n=str.length();

    //base case
    if(i>(n-i-1)){
        return true;
    }

    if(tolower(str[i])!=tolower(str[n-i-1])){
        return false;
    }
    i++;
    checkPalindrome(str,i);


}
int main(){
string str="CivIc";
cout<<checkPalindrome(str,0);
cout<<endl;
return 0;
}