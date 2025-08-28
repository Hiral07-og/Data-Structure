#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
void bubble_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool isSwap=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if(isSwap=false){//if array is already sorted
            return;
        }
    }
}
int main(){
    int arr[10]={64,34,25,12,22,11,90};
    display(arr,6);
    cout<<endl;
    bubble_sort(arr,6);
    cout<<"After bubble sort:\n";
    display(arr,6);
    return 0;
}