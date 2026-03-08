#include<iostream>
using namespace std;
int main(){
        int toggle=1;
    for(int i=0;i<6;i++){
        for(int j=0;j<i+1;j++){
            cout<<toggle;
            if(toggle==1){
                toggle=0;
            }
            else{
                toggle=1;
            }
        }
        cout<<endl;
    }
}