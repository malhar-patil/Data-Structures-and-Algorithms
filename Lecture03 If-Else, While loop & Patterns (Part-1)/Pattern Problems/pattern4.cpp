// 3

// 321
// 321
// 321

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int j=n;
//     while(j>0){
//         cout<<j;
//         j--;
//     }
//     cout<<endl;
//     i++;
// }
// cout<<endl;
// return 0;
// }

//OR
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<n-j+1;
        j++;
    }
    cout<<endl;
    i++;
}
cout<<endl;
return 0;
}