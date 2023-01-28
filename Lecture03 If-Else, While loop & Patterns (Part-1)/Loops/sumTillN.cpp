#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int sum=0;
int i=0;
while(i<=n){
    sum+=i;
    i++;
}
cout<<"Sum till "<<n<<" is "<<sum<<endl;
cout<<endl;
return 0;
}