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
void insert(int arr[],int n){
    int pos;
    cout<<"Enter position to be inserted\n";
    cin>>pos;
    int value;
    cout<<"Enter the value\n";
    cin>>value;
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
    display(arr,n+1);
}
void deletion(int arr[],int n){
    int pos;
    cout<<"Enter position to be deleted\n";
    cin>>pos;
    for(int i=pos;i<n;i++){
        arr[i]=arr[i+1];
    }
    display(arr,n);
}
void linear_search(int arr[],int n){
    int num,sum;
    cout<<"Enter the number to be searched\n";
    cin>>num;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            sum=i;
            break;
        }
        else{
           sum=0;
        }
    }
    if(sum!=0){
        cout<<"Number found at index "<<sum;
    }
    else{
         cout<<"Element not found\n";
    }
}
int main(){
    int arr[10];
    int n;
    cout<<"Enter no. of elements"<<endl;
    cin>>n;
    create(arr,n);
    display(arr,n);
    insert(arr,n);
    deletion(arr,n);
    linear_search(arr,n);
    return 0;
}