#include<iostream>
using namespace std;
void create(int arr1[][100],int a,int b){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr1[i][j];
        }
    }
}
void display(int arr1[][100],int a,int b){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<arr1[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void transpose(int arr[][100],int a,int b){
    if(a!=b){
        cout<<"Transpose not possible\n";
    }
    else{
        int temp;
    for(int i=0;i<a;i++){
        for(int j=i+1;j<b;j++){
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    display(arr,a,b);
    }
    
}
int main(){
    int a,b;
    int arr1[100][100];
    cout<<"Enter no. of rows and columns of array\n";
    cin>>a>>b;
    cout<<"Enter values of 1st array\n";
    create(arr1,a,b);
    display(arr1,a,b);
    cout<<endl;
    cout<<"Transpose\n";
    transpose(arr1,a,b);
    return 0;
}