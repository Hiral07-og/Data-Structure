#include<iostream>
using namespace std;
int missing(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]!=i+1){
            return i+1;
        }
    }
    return size+1;
}
int main(){
    int arr[]={1,2,3,4,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int missing_no=missing(arr,size);
    cout<<"The missing no. here is "<<missing_no<<endl;
    return 0;
}