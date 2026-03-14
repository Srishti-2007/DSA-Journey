#include <iostream>
using namespace std;

int sum(int arr[], int n){
    
    // base case
    if(n == 0)
        return arr[0];

    // recursive case
    return arr[n] + sum(arr, n-1);
}

int main(){

    int arr[] = {5,3,2,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = sum(arr, n-1);

    cout << "Sum of array = " << result;

}