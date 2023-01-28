#include<bits/stdc++.h>
using namespace std;
int squareRoot(int n){
    int result=0;
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        int x=mid*mid;
        if(x==n){
            return mid;
        }
        else if(x>n){
            e=mid-1;
        }
        else{
            result=mid;
            s=mid+1;
        }
    }
    return result;
}
int main(){
int n;
cin>>n;
cout<<squareRoot(n)<<endl;
cout<<endl;
return 0;
}