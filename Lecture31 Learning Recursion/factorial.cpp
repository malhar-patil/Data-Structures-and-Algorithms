#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    int smallerProb=factorial(n-1);
    return smallerProb*n;

}
int main(){
int n;
cin>>n;

int ans=factorial(n);

cout<<ans<<endl;
cout<<endl;
return 0;
}