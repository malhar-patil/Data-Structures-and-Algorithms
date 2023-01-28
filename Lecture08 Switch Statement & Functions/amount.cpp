#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
cout<<endl;
int temp;
switch(100){
    case 100:
    temp=n/100;
    n=n-(temp*100);
    cout<<"No. of Rs 100 Notes: "<<temp;
    cout<<endl;

    case 50:
    temp=n/50;
    n=n-(temp*50);
    cout<<"No. of Rs 50 Notes: "<<temp;
    cout<<endl;

    case 20:
    temp=n/20;
    n=n-(temp*20);
    cout<<"No. of Rs 20 Notes: "<<temp;
    cout<<endl;

    case 1:
    temp=n/1;
    n=n-(temp*1);
    cout<<"No. of Rs 1 Notes: "<<temp;
    break;
}
return 0;
}