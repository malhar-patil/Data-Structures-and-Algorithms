// #include<bits/stdc++.h>
// using namespace std;
// void merge(int arr[],int s,int e){
//     int mid=s+(e-s)/2;

//     int len1=mid-s+1;
//     int len2=e-mid;

//     vector<int> arr1;
//     vector<int> arr2;

//     int temp=s;
//     while(temp<=mid){
//         arr1.push_back(arr[temp]);
//         temp++;
//     }
//     temp=mid+1;
//     while(temp<=e){
//         arr2.push_back(arr[temp]);
//         temp++;
//     }

//     //merge
//     int i=0;
//     int j=0;
//     temp=s;
//     while(i<len1&&j<len2){
//         if(arr1[i]<arr2[j]){
//             arr[s]=arr1[i];
//             s++;
//             i++;
//         }
//         else{
//             arr[s]=arr2[j];
//             s++;
//             j++;
//         }
//     }
//     while(i<len1){
//         arr[s]=arr1[i];
//         s++;
//         i++;
//     }
//     while(j<len2){
//         arr[s]=arr2[j];
//         s++;
//         j++;
//     }

//     return;
// }
// void mergeSort(int arr[],int s,int e){
//     if(s>=e){
//         return;
//     }

//     int mid=s+(e-s)/2;

//     mergeSort(arr,s,mid);

//     mergeSort(arr,mid+1,e);

//     merge(arr,s,e);

// }
// int main(){
// int arr[5]={2,3,1,6,4};
// int n=5;
// mergeSort(arr,0,n-1);

// for(int i=0;i<5;i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int s,int mid,int e){
    int len1=mid-s+1;
    int len2=e-mid;

    vector<int> arr1;
    vector<int> arr2;

    int temp=s;
    for(int i=temp;i<=mid;i++){
        arr1.push_back(arr[i]);
    }
    temp=mid+1;
    for(int i=temp;i<=e;i++){
        arr2.push_back(arr[i]);
    }

    temp=s;
    int i=0;
    int j=0;
    while(i<len1&&j<len2){
        if(arr1[i]<arr2[j]){
            arr[temp]=arr1[i];
            temp++;
            i++;
        }
        else{
            arr[temp]=arr2[j];
            temp++;
            j++;
        }
    }
    while(i<len1){
        arr[temp]=arr1[i];
        temp++;
        i++; 
    }

    while(j<len2){
        arr[temp]=arr2[j];
        temp++;
        j++; 
    }
    return;

}
void mergeSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }

    int mid=s+(e-s)/2;

    //left part
    mergeSort(arr,s,mid);

    //right part
    mergeSort(arr,mid+1,e);

    merge(arr,s,mid,e);

    return;
}
int main(){
int arr[5]={2,5,1,10,6};
int n=5-1;
mergeSort(arr,0,n);
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}