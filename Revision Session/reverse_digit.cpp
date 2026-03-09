#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int n=-12345;
    int rev=0;
    int copy_of_real_n=n;
    n=abs(n);
    while(n>0){
        int lastdigit=n%10;
        rev=(10*rev)+lastdigit;
        n=floor(n/10);
    }
   if(copy_of_real_n<0)
    cout<<-rev;
    else
     cout<<rev;
}