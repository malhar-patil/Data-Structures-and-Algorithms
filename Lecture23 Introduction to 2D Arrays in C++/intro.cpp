#include<bits/stdc++.h>
using namespace std;
bool search(int arr[][4],int key,int row ,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] == key){
                return true;
            }
        }
    }
    return false;
}
int main(){
//crete 2-D Array
int arr[3][4];
// int arr[4][3]={{1,11,111},{2,22,222},{3,33,333},{4,44,444}};

//Input Array Elements
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cin>>arr[i][j];
    }
}

//Print 2-D array
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

cout<<"Enter an element to search: ";
int key;
cin>>key;

if(search(arr,key,3,4)){
    cout<<"Present"<<endl;
}
else{
    cout<<"Not Present"<<endl;
}

cout<<endl;
return 0;
}