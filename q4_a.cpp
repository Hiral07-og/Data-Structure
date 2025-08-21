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
void reverse(int arr[],int n){
    cout<<"\nReversing the arrays\n";
    int i=0;
    int j;
    while(i<j){
        j=n-i-1;
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
    }
    display(arr,n);
}
int main(){
    int arr[10];
    int n;
    cout<<"Enter no. of elements"<<endl;
    cin>>n;
    create(arr,n);
    display(arr,n);
    reverse(arr,n);
    return 0;
}