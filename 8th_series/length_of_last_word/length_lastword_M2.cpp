#include <iostream>
using namespace std;

int lengthOfLastWord(string s) {
    int n = s.length() - 1;   // fix: last index
    int count = 0;

    while(n >= 0){
        if(s[n] != ' '){
            count++;
        }
        else if(count > 0){
            break;
        }
        n--;
    }
    return count;
}

int main() {
    string s;
    getline(cin, s);
    cout << lengthOfLastWord(s);
    return 0;
}