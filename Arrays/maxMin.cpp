#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
int n;
cin>>n;
int arr[100];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int mx=-999;
int mn=999;
for(int i=0;i<n;i++){
    mx=max(arr[i],mx);
    mn=min(mn,arr[i]);
}
cout<<"MAX NO. "<<mx<<endl;
cout<<"MIN NO. "<<mn<<endl;
return 0;
}