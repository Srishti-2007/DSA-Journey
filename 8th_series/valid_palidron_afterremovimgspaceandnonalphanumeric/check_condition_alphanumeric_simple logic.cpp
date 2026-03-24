#include <iostream>
#include <cctype>   // IMPORTANT
using namespace std;

int main() {
    string s = "A1b@";

    for (int i = 0; i < s.length(); i++) {
        if (isalnum(s[i])) {
            cout << s[i] << " is alphanumeric\n";
        }
    }

    return 0;
}


// #include <iostream>
// using namespace std;

// int main() {
//     string s = "A1b@";

//     for (int i = 0; i < s.length(); i++) {
//         char ch = s[i];

//         if ((ch >= 'a' && ch <= 'z') ||
//             (ch >= 'A' && ch <= 'Z') ||
//             (ch >= '0' && ch <= '9')) {
            
//             cout << ch << " is alphanumeric\n";
//         }
//     }

//     return 0;
// }