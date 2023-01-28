#include<bits/stdc++.h>
vector<int> mergeSorted(int arr1[],int n,int arr2[],int m,vector<int> arr3){
    int i=0;
    int j=0;
    while(i<n&&j<m){
        if(arr1[i]<arr2[j]){
            arr3.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j]){
            arr3.push_back(arr2[j]);
            j++;
        }
        else{
            arr3.push_back(arr1[i]);
            arr3.push_back(arr2[j]);
            i++;
            j++;
        }
    }
    return arr3;
}
using namespace std;
int main(){
int arr1[5]={1,3,5,7,9};
int arr2[3]={2,4,6};
vector<int> arr3;
vector <int> ans= mergeSorted(arr1,5,arr2,3,arr3);
for(int i=0;i<arr3.size();i++){
    cout<<arr3[i]<<" ";
}
return 0;
}