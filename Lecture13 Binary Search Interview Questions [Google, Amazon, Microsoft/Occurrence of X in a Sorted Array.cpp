// ques link:
// https://www.codingninjas.com/codestudio/problems/occurrence-of-x-in-a-sorted-array_630456?leftPanelTab=0

int firstOcc(int arr[], int n, int X){
    int s=0;
    int e=n-1;
    int result=0;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==X){
            result=mid;
            e=mid-1;
        }
        else if(arr[mid]<X){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return result;
}

int lastOcc(int arr[], int n, int X){
    int s=0;
    int e=n-1;
    int result=0;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==X){
            result=mid;
            s=mid+1;
        }
        else if(arr[mid]<X){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return result;
}
int countOccurences(int arr[], int n, int X)
{
	//Write your code here
    if(lastOcc(arr,n,X)+firstOcc(arr,n,X)==0){
        return 0;
    }
    int result=lastOcc(arr,n,X)-firstOcc(arr,n,X)+1;
    return result;
}