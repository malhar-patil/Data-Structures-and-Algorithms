#include<iostream>
using namespace std;
bool linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
int n;
cin>>n;
int arr[100];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int key;
cin>>key;
int ans=linearSearch(arr,n,key);
if(ans){
    cout<<"No. is present"<<endl;
}
else{
    cout<<"No. is not present"<<endl;
}
return 0;
}