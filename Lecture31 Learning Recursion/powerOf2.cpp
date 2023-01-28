#include<bits/stdc++.h>
using namespace std;
int power(int n){
    //base case
    if(n==0)
    return 1;

    //recursive relation
    int smallerProb=power(n-1);
    return smallerProb*2;
}
int main(){
int n;
cin>>n;

int ans=power(n);
cout<<ans<<endl;
cout<<endl;
return 0;
}