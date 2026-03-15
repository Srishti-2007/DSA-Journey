#include<iostream>
using namespace std;
bool check(int n){
    if(n==1) return true;
    else if((n%2!=0)||n<1) return false;  //number odd hai
    return check(n/2);
}
int main(){
    int n=20;
    cout<<check(n);
}