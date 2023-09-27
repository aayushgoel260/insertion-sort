#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main(){
    int arr[8]={8,2,56,23,89,70,12,4};
    insertionsort(arr,8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
        
    }
    return 0;
}