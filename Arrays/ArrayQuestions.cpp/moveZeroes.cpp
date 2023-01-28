#include<iostream>
using namespace std;
int main(){
int arr[7]={2,0,1,3,0,4,0};
int arr2[7];
int count=0;
int j=0;
for(int i=0;i<7;i++){
    if(arr[i]==0){
        count++;
        continue;
    }
    else{
        arr2[j]=arr[i];
        j++;
    }
}
for(int i=0;i<7;i++){
    cout<<arr2[i]<<" ";
}
cout<<"j: "<<j<<endl;
cout<<"count: "<<count<<endl;
for(int i=j;i<7;i++){
    arr2[i]=0;
}
for(int i=0;i<7;i++){
    cout<<arr2[i]<<" ";
}
return 0;
}