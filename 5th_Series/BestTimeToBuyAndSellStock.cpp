#include<iostream>
using namespace std;
int main(){
    int p[]={7,1,5,3,6,4};
    int size=6;
    int min=p[0];
    int maxprofit=0;
    for(int i=0;i<size;i++){
        if(p[i]<min){
            min=p[i];
        }
        if(p[i]-min>maxprofit){
            maxprofit=p[i]-min;
        }
    }
    cout<<maxprofit;
}