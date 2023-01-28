#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n){
    int counter=0;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        counter++;
    }
    return;
}
int main(){
int arr[5]={2,10,4,7,1};
bubbleSort(arr,5);
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}