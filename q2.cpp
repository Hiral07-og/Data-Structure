#include<iostream>
using namespace std;
void create(int arr[],int n){
    cout<<"Enter elements\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
void deletion(int arr[],int n,int pos){
    for(int i=pos;i<n;i++){
        arr[i]=arr[i+1];
    }
    cout<<"\nAfter deletion of duplicate\n";
    display(arr,n);
}
void duplicate(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                deletion(arr,n,j);
            }
        }
    }
}
int main(){
    int arr[10];
    int n;
    cout<<"Enter no. of elements"<<endl;
    cin>>n;
    create(arr,n);
    display(arr,n);
    duplicate(arr,n);
    return 0;
}