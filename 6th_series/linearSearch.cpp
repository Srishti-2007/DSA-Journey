#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,9,0,3};
    int size=5;
    int target=9;
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            cout<<"found at index "<<i<<" and the value is "<<arr[i];
            return 0;
        }
    }
    cout<<"not found "<<"-1";
}