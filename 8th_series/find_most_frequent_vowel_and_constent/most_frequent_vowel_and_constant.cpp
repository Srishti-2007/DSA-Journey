#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int maxFreqSum(string s) {
    unordered_map<char, int> map;

    // count frequency
    for (int i = 0; i < s.length(); i++) {
        map[s[i]]++;
    }

    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    int maxVowel = 0;
    int maxConsonant = 0;

    // find max freq
    for (int i = 0; i < s.length(); i++) {
        bool isVowel = false;

        for (int j = 0; j < vowels.size(); j++) {
            if (s[i] == vowels[j]) {
                isVowel = true;
                break;
            }
        }

        if (isVowel) {
            if (map[s[i]] > maxVowel) {
                maxVowel = map[s[i]];
            }
        } else {
            if (map[s[i]] > maxConsonant) {
                maxConsonant = map[s[i]];
            }
        }
    }

    return maxVowel + maxConsonant;
}

int main() {
    string s = "leetcode";
    cout << maxFreqSum(s);
    return 0;
}