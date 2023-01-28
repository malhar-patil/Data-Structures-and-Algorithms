#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int x,int n){
    for(int i=x;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool binarySearch(int arr[],int x,int n,int key){
    print(arr,x,n);
    
    int s=x;
    int e=n-1;
    int mid=s+(e-s)/2;
    cout<<"Mid: "<<mid<<endl;

    //base case
    if(s>e){
        return false;
    }
    if(arr[mid]==key){
        return true;
    }
    else if(arr[mid]>key){
        binarySearch(arr,x,mid-1,key);
    }
    else {
        binarySearch(arr,mid+1,n,key);
    }
}
int main(){
int arr[5]={2,6,10,17,20};
int key=17;
int ans= binarySearch(arr,0,5,key);
if(ans==1){
    cout<<"Element is present"<<endl;
}
else{
    cout<<"Element is not present"<<endl;
}
cout<<endl;
return 0;
}