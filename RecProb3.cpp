//Find the first occurance and last occurance of anumber in the array

#include<iostream>
using namespace std;

int fo(int arr[], int n, int key, int i){
    if(i==n)
    return -1;

    if(arr[i]==key)
    return i;

    return fo(arr,n,key,i+1);
}

int lo(int arr[], int n, int key, int i){
    if(i==n)
    return -1;
    
    int roa=lo(arr, n, key, i+1);

    if(roa!=-1)
    return roa;
    
    if(arr[i]==key)
    return i;

    return -1;
    }

int main(){

    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];

    cout<<fo(arr,n,key,0)<<endl;
    cout<<lo(arr,n,key,0)<<endl;

    return 0; 
}