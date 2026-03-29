#include<iostream>
using namespace std;
int main(){
    string s="RLRRLLRLRL";
    int r=0;
    int l=0;
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='R'){
            r++;
        }
        else{
            l++;
        }
        if(r==l){
            count++;
            r=0;
            l=0;
        }
    }
    cout<<count;
}