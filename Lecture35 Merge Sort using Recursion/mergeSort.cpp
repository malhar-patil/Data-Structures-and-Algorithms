#include<bits/stdc++.h>
using namespace std;
void merge (int arr[],int s,int e){

    int mid=s+(e-s)/2;

    int len1=mid-s+1;
    int len2=e-mid;

    int a1[len1]={0};
    int a2[len2]={0};

    int k=s;

    for(int i=0;i<len1;i++){
        a1[i]=arr[k];
        k++;
    }
    k=mid+1;
    for(int i=0;i<len1;i++){
        a2[i]=arr[k];
        k++;
    }
    
    int i=0;
    int j=0;
    k=s;

    while(i<len1&&j<len2){
        if(a1[i]<a2[j]){
            arr[k]=a1[i];
            k++;
            i++;
        }
        else {
            arr[k]=a2[j];
            k++;
            j++;
        }
    }
    while (i<len1){
        arr[k]=a1[i];
        k++;
        i++;
    }

    while(j<len2){
        arr[k]=a2[j];
        k++;
        j++;
    }

}
void mergeSort(int arr[],int s,int e){
    //
    if(s>=e){
        return;
    }

    int mid=s+(e-s)/2;
    //sort left part
    mergeSort(arr,s,mid);

    //sort right part
    mergeSort(arr,mid+1,e);

    //merge sorted arrays
    merge(arr,s,e);


}
int main(){
int arr[7]={38,27,43,3,9,82,10};
int n=7;
mergeSort(arr,0,n-1);

for(int i=0;i<7;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}