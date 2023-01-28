#include<bits/stdc++.h>
using namespace std;
int main(){
char ch;
cin>>ch;
if(ch>='a'&&ch<'z'){
    cout<<ch<<" is lowercase"<<endl;
}
else if(ch>='A'&&ch<='Z'){
    cout<<ch<<" is uppercase"<<endl;
}
else {
    cout<<ch<<" is numeric"<<endl;
}
return 0;
}