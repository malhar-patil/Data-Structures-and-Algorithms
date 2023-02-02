// #include<bits/stdc++.h>
// using namespace std;
// int check(int arr[],int n){
//     for(int i=0;i<n;i++){
//     	    int num=arr[i];
//     	    int x=num%10;
//     	    while(num>0){
//     	        int lastdigit=num%10;
//                 cout<<x<<endl;
//                 cout<<lastdigit<<endl;
//     	        if(lastdigit!=x){
//     	            return 0;
//     	        }
//     	        num=num/10;
//     	    }
//     	}
//     	return 1;
// }
// int main(){
// int arr[5]={111,222,333,444,555};
// cout<<check(arr,5)<<endl;
// cout<<endl;
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[6]={2,-1,5,3,-8,6};
int currsum=0;
int maxsum=0;
for(int i=0;i<6;i++){
    currsum+=arr[i];
    if(currsum>maxsum){
        maxsum=currsum;
    }
    if(currsum<0){
        currsum=0;
    }
}
cout<<maxsum<<endl;
cout<<endl;
return 0;
}