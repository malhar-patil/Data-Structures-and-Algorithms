#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
if(a>b){
    cout<<"Max Number: "<<a<<endl;
    cout<<"Min Number: "<<b<<endl;
}
else{
    cout<<"Max Number: "<<b<<endl;
    cout<<"Min Number: "<<a<<endl;
}
cout<<endl;
return 0;
}