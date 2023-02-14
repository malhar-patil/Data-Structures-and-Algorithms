#include<bits/stdc++.h>
using namespace std;
int minimum(int arr[],int n){
    int mn=INT_MAX;
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]<mn){
            mn=arr[i];
            ans=i;
        }
    }
    return ans;
}
void selectionSort(int arr[],int n){
    if(n==0){
        return;
    }

    int min=minimum(arr,n);
    cout<<min<<endl;
    if(arr[0]>arr[min]){
        swap(arr[0],arr[min]);
    }

    selectionSort(arr+1,n-1);
}
int main(){
int arr[5]={3,2,4,1,6};
selectionSort(arr,5);

for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}