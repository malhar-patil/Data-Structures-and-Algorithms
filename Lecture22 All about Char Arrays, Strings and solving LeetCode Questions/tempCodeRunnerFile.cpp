#include<bits/stdc++.h>
using namespace std;

void reverseWord(int x,int e,string *s){
    int a=x;
    int b=e;
    while(a<=b){
        swap(*s[a],*s[b]);
        a++;
        b--;
    }
    cout<<*s<<endl;
    return;
}

string reverseString(string *s){

    int x=0;
    for(int i=0;i<*s.length();i++){
        if(*s[i]==' '){
            reverseWord(x,i-1,*s);
            x=i+1;
        }
        if(i==*s.length()-1){
            reverseWord(x,i-1,*s);
            return *s;
        }
    }
}
int main(){
string s;
getline(cin,s);
string*pstr=&s[0];
cout<<reverseString(s)<<endl;;

cout<<endl;
return 0;
}