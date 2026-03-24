#include <iostream>
#include <string>
#include <cctype> // isalnum aur tolower ke liye

using namespace std;

// Palindrome check karne ka function
bool checkPalindrome(string s) {
    int start = 0;
    int end = s.length() - 1;

    while (start < end) {
        // Agar character alphanumeric nahi hai toh aage badho (left side)
        if (!isalnum(s[start])) {
            start++;
        } 
        // Agar character alphanumeric nahi hai toh peeche hato (right side)
        else if (!isalnum(s[end])) {
            end--;
        } 
        // Dono characters ko lowercase karke compare karo
        else {
            if (tolower(s[start]) != tolower(s[end])) {
                return false; // Match nahi hua toh seedha false
            }
            start++;
            end--;
        }
    }
    return true; // Sab match ho gaya toh true
}

int main() {
    // Yahan humne khud hi string le li hai (Example 1 from LeetCode)
    string s = "A man, a plan, a canal: Panama";

    cout << "String: " << s << endl;

    if (checkPalindrome(s)) {
        cout << "Result: true (It is a Palindrome)" << endl;
    } else {
        cout << "Result: false (Not a Palindrome)" << endl;
    }

    return 0;
}