#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
long ans=0;
int i=0;
while(n>0){
    int lastbit=n%10;
    ans=(lastbit*pow(2,i))+ans;
    i++;
    n=n/10;
}
cout<<ans<<endl;
cout<<endl;
return 0;
}