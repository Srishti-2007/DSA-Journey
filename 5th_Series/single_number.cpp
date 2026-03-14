#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int arr[]={4,1,2,1,2};
    int size=5;

    sort(arr,arr+size);

    for(int i=0;i<size;i+=2){
        if(arr[i]!=arr[i+1]){
            cout<<arr[i];
            break;
        }
    }

}