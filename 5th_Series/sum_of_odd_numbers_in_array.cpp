#include<iostream>
using namespace std;
int sum_odd(int arr[],int n){
    //base case
    if(n==0){
        if(arr[0]%2!=0) return arr[0];
        else return 0;
    }
    if(arr[n]%2==0)
    return 0+sum_odd(arr,n-1);
    else
    return arr[n]+sum_odd(arr,n-1);
    
}
int main(){
    int arr[]={1,2,3,4};
    int n=4;
    int result=sum_odd(arr,n-1);
    cout<<"result of odd numbers  is "<<result;
}