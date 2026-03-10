#include<iostream>
using namespace std;
int main() {
    int arr[]={0,0,1,1,1,2,2,3,3,4};
    int size=10;
    int x=0;
    for(int i=0;i<size;i++){
        if(arr[i]>arr[x]){
            x=x+1;
            arr[x]=arr[i];
        }
    }
    cout<<x+1;
}