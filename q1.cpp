#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int linear_search(int key,int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    cout<<"Enter size of array\n";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter values\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to be searched through binary search\n";
    int key;
    cin>>key;
    cout<<"Element found at "<<binary_search(arr,n,key)<<endl;
       cout<<"Enter element to be searched through linear search\n";
    int key1;
    cin>>key1;
    int s=linear_search(key1,arr,n);
    if(s==-1){
        cout<<"Element not found\n";
    }
    else{
        cout<<"Element found at "<<s<<" index"<<endl;
    }
    return 0;
}