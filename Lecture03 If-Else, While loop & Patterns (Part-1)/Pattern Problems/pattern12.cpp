// 3
// A B C 
// D E F 
// G H I 

#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
char value='A';
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<value<<" ";
        j++;
        value++;
    }
    cout<<endl;
    i++;
}
cout<<endl;
return 0;
}