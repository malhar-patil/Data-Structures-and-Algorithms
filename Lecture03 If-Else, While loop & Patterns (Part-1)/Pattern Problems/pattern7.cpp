// 4

// 1
// 22
// 333
// 4444

#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<i;
        j++;
    }
    cout<<endl;
    i++;
}
cout<<endl;
return 0;
}