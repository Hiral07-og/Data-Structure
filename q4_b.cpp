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
void multiply(int arr1[][100],int arr2[][100],int result[][100],int a,int b,int c,int d){
    if(b!=c){
        cout<<"matrix multiplication cannot be proceeded\n";
        return ;
    }
    else{
        for(int i=0;i<a;i++){
            for(int j=0;j<d;j++){
                result[i][j]=0;
                for(int k=0;k<b;k++){
                    result[i][j]=result[i][j]+(arr1[i][k]*arr2[k][j]);
                }
            }
        }
    }
}
int main(){
    int a,b,c,d;
    int arr1[100][100],arr2[100][100],result[100][100];
    cout<<"Enter no. of rows and columns of 1st array\n";
    cin>>a>>b;
    cout<<"Enter no. of rows and columns of 2nd array\n";
    cin>>c>>d;
    cout<<"Enter values of 1st array\n";
    create(arr1,a,b);
    cout<<"Enter values of 2nd array\n";
    create(arr2,c,d);
    display(arr1,a,b);
    cout<<endl;
    display(arr2,c,d);
    multiply(arr1,arr2,result,a,b,c,d);
    cout<<endl<<"Multiplication array:\n";
    display(result,a,d);
    return 0;
}