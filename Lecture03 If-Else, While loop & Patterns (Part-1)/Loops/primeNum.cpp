#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int i=2;
int isPrime=true;
while(i<n){
    if(n%i==0){
        cout<<"Not a Prime Number"<<endl;
        isPrime=false;
        break;
    }
    i++;
}
if(isPrime){
    cout<<"Prime Number"<<endl;
}

return 0;
}