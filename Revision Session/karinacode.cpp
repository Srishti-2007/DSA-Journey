#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,0,1,9,0,5,0};
    int size=8;
    int x=0;
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            arr[x]=arr[i];
            x++;
        }
    }
    for(int i=x;i<size;i++){
        arr[i]=0;
    }
    // printing
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}