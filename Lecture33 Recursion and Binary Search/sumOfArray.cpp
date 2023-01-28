#include<bits/stdc++.h>
using namespace std;
void getSum(int arr[],int n,int &sum){

    if(n==0){
        cout<<sum<<endl;
    }

    sum+=arr[0];
    getSum(arr+1,n-1,sum);
}
int main(){
int arr[5]={10,14,20,7,34};
int sum=0;
getSum(arr,5,sum);
cout<<endl;
return 0;
}