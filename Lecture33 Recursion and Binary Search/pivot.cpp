#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
int pivot(int arr[],int s,int e){

    print(arr,s,e);
        int mid=s+(e-s)/2;
    //base case
    if(s>=e){
        return e;
    }

    //
    cout<<"Mid: "<<mid<<endl;
    cout<<s<<" "<<e<<endl;
    if(arr[0]<arr[mid])
    return (arr,mid+1,e);

    else
    return (arr,s,mid);

}
int main(){
int arr[5]={4,9,1,2,3};
cout<<pivot(arr,0,4)<<endl;
cout<<endl;
return 0;
}