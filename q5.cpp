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
void RowSum(int arr[][100],int a,int b){
    for(int i=0;i<a;i++){
        int rowSum=0;
        for(int j=0;j<b;j++){
            rowSum=rowSum+arr[i][j];
        }
        cout<<"Row "<<i+1<<":"<<rowSum<<endl;
    }
}
void ColumnSum(int arr[][100],int a,int b){
    for(int j=0;j<b;j++){
        int ColumnSum=0;
        for(int i=0;i<a;i++){
            ColumnSum=ColumnSum+arr[i][j];
        }
        cout<<"Column "<<j+1<<":"<<ColumnSum<<endl;
    }
}
int main(){
    int a,b;
    int arr1[100][100];
    cout<<"Enter no. of rows and columns of array\n";
    cin>>a>>b;
    cout<<"Enter values of array\n";
    create(arr1,a,b);
    display(arr1,a,b);
    cout<<endl;
    RowSum(arr1,a,b);
    ColumnSum(arr1,a,b);
    return 0;
}