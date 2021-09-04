#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int s=0; int e=n;
    int mid=(s+e)/2;

    while(s<=e){
        if(arr[mid]==key)
        return mid;

        else if(arr[mid]<key)
        s=mid+1;

        else
        e=mid-1;
    }
    return -1;

}


int main(){
    int n;
    cin>>n;
    //elements of the array should be present in ascending order(sorted order)

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(arr,n,key)<<endl;
    return 0;
}

//time complexity= log(n)