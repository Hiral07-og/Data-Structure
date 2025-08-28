#include<iostream>
using namespace std;
int main(){
    int max=4;
    int arr[10];
    cout<<"Enter elements(row major):\n";
    for(int i=0;i<max;i++){
        cin>>arr[i];
    }
    for(int i=0;i<max;i++){
        for(int j=0;j<max;j++){
            if(i==j){
                cout<<arr[i]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
    return 0;
}