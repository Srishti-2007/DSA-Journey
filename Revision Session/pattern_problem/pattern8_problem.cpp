#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<4;i++){
        int toggle=1;
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