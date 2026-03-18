#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,7,1,9};
    int size=5;
    for(int i=1;i<size;i++){
        int curr=arr[i];
        int prev=i-1;
        while(arr[prev]>curr && prev>=0){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}