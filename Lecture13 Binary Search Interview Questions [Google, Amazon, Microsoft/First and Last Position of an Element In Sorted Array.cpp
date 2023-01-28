// ques link:
// https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0

#include <bits/stdc++.h> 
int firstOcc(vector<int>& arr, int n, int k){
    int s=0;
    int e=n-1;
    int result=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==k){
            result=mid;
            e=mid-1;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return result;
}

int lastOcc(vector<int>& arr, int n, int k){
    int s=0;
    int e=n-1;
    int result=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==k){
            result=mid;
            s=mid+1;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return result;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first=firstOcc(arr,n,k);
    p.second=lastOcc(arr,n,k);
    return p;
}