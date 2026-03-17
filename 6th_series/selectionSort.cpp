#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,7,1,9};
    int size=5;
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        // swap(arr[i],min)
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}