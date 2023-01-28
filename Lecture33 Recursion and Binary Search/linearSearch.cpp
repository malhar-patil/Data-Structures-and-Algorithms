#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool linearSearch(int arr[],int n,int key){
    print(arr,n);
    //base case
    if(n==0){
        return false;
    }

    if(arr[0]==key){
        return true;
    }
    linearSearch(arr+1,n-1,key);
}
int main(){
int arr[5]={2,5,10,8,16};
int key=10;
int ans= linearSearch(arr,5,key);
if(ans==1){
    cout<<"Element is present"<<endl;
}
else{
    cout<<"Element is not present"<<endl;
}
cout<<endl;
return 0;
}