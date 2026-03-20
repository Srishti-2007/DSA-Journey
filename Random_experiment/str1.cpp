#include <iostream>
#include <vector> // Required for the dynamic array
#include <string>

using namespace std;

int main() {
    string s[] = {"leet", "meet", "ji", "neet"};
    char x = 'e'; // The character we are looking for
    
    // Calculate the number of strings in the array 's'
    int n = sizeof(s) / sizeof(s[0]); 

    // Use a vector because we don't know how many indices we will find
    vector<int> arr; 

    // Outer loop: Go through each word
    for (int i = 0; i < n; i++) {
        // Inner loop: Go through each character of the current word s[i]
        for (int j = 0; j < s[i].length(); j++) {
            if (s[i][j] == x) {
                arr.push_back(i); // Add the index 'i' to our result list
                break;            // Stop checking this word once we find 'e'
            }
        }
    }

    // Print the indices stored in arr
    cout << "Indices containing '" << x << "': ";
    for (int val : arr) {
        cout << val << " ";
    }

    return 0;
}


// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string s[] = {"leet", "meet", "ji", "neet"};
//     char x = 'e';
    
//     // 1. Calculate how many words are in 's'
//     int n = sizeof(s) / sizeof(s[0]); 

//     // 2. Create an array to store indices. 
//     // We make it size 'n' because at most, all words could match.
//     int arr[n]; 
//     int count = 0; // To keep track of how many indices we actually find

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < s[i].length(); j++) {
//             if (s[i][j] == x) {
//                 arr[count] = i; // Store index at the current count position
//                 count++;        // Move to the next slot in arr
//                 break;          // Stop checking this word
//             }
//         }
//     }

//     // 3. Print only the slots we filled
//     for (int i = 0; i < count; i++) {
//         cout << arr[i] << " ";
//     }
// }