#include<iostream>
using namespace std;
void getreverse(string& str,int i){ 
    int n=str.length();
    //base case
    if(i>(n-i-1)){
        return;
    }
    
    swap(str[i],str[n-i-1]);
    i++;
    getreverse(str,i);
   
    
}
int main(){
string s="abcde";
int i=0;
getreverse(s,i);
cout<<s<<endl;
cout<<endl;
return 0;
}