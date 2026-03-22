#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello world   ";
    int len = s.length()-1;
    int count = 0;
    // ignore last spaces
    while(len>0){
        if(s[len]== ' '){
            len--;
        }
        else{
            break;
        }
    }
    // Start from the last valid index (len - 1)
    // Go backwards as long as i is 0 or greater (i >= 0)
    for (int i = len ; i >= 0; i--) {
        if (s[i] == ' ') { // Or use 32, but ' ' is more readable
            break;
        }
        count++;
    }
    cout << count; // Output: 5 (for "world")
}