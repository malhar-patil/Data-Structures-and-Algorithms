#include<bits/stdc++.h>
using namespace std;
void reachHome(int home,int curr){
    //base case
    cout<<"Home: "<<home<<" "<<"Curr: "<<curr<<endl;
    if(curr==home){
        cout<<"Reached!"<<endl;
        return;
    }
    curr++;
    reachHome(home,curr);
}
int main(){
int home=10;
int curr=0;
reachHome(home,curr);
cout<<endl;
return 0;
}