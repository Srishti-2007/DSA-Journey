#include<iostream>
using namespace std;

int main(){
    int arr[] = {3, 6, 7, 8, 9};
    int size = 5;
    int target = 8;
    int l = 0;
    int h = size - 1;

    while(l <= h){
        int middle = (l + h) / 2;

        if(arr[middle] == target){      
            cout << "Found at index: " << middle;
            return middle;
        }
        else if(arr[middle] < target){   
            l = middle + 1;
        }
        else{
            h = middle - 1;
        }
    }

    cout << "Not found";
    return -1;
}