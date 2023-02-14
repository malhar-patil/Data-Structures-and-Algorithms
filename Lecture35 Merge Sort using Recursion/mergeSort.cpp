#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int s,int e){
    int mid=s+(e-s)/2;

    int len1=mid-s+1;
    int len2=e-mid;

    vector<int> arr1;
    vector<int> arr2;

    int temp=s;
    while(temp<=mid){
        arr1.push_back(arr[temp]);
        temp++;
    }
    temp=mid+1;
    while(temp<=e){
        arr2.push_back(arr[temp]);
        temp++;
    }

    //merge
    int i=0;
    int j=0;
    temp=s;
    while(i<len1&&j<len2){
        if(arr1[i]<arr2[j]){
            arr[s]=arr1[i];
            s++;
            i++;
        }
        else{
            arr[s]=arr2[j];
            s++;
            j++;
        }
    }
    while(i<len1){
        arr[s]=arr1[i];
        s++;
        i++;
    }
    while(j<len2){
        arr[s]=arr2[j];
        s++;
        j++;
    }

    return;
}
void mergeSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }

    int mid=s+(e-s)/2;

    mergeSort(arr,s,mid);

    mergeSort(arr,mid+1,e);

    merge(arr,s,e);

}
int main(){
int arr[5]={2,3,1,6,4};
int n=5;
mergeSort(arr,0,n-1);

for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}