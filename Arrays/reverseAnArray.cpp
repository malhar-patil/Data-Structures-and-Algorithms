// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int arr[20];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// int temparr[20];
// for(int i=0;i<n;i++){
//         temparr[n-i-1]=arr[i];
//     }
// for(int i=0;i<n;i++){
//     cout<<temparr[i]<<" ";
// }
// return 0;
// }

//POINTER METHOD
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[20];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int s=0;
int e=n-1;
while(s<=e){
    int temp=arr[s];
    arr[s]=arr[e];
    arr[e]=temp;
    s++;
    e--;
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}