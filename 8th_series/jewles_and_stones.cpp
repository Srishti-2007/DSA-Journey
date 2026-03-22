#include<iostream>
#include<string>
using namespace std;
int main(){
    string jewles="aA";
    string stones="aAAbbbb";
    int count=0;
    for(int i=0;i<=jewles.length()-1;i++){
        for(int j=0;j<=stones.length()-1;j++){
            if(jewles[i]==stones[j]){
                count++;
            }
        }
    }
    cout<<count;
}