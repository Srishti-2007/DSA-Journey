#include<iostream>
using namespace std;
int main(){
    string s="RLRRLLRLRL";
    int temp=0;
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='R'){
            temp++;
        }
        else{
            temp--;
        }
        if(temp==0){
            count++;
        }
    }
    cout<<count;
}