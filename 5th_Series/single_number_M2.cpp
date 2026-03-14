#include<iostream>
using namespace std;
int main(){
    int arr[]={4,1,2,1,2,4,5,9,9};
    int size=9;
    int total=0;
    for(int i=0;i<size;i++){
        total=total^arr[i];
    }
    cout<<total;
}