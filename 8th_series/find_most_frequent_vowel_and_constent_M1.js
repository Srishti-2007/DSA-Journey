function maxFreqSum(s) {
    let map = {};

    // count frequency
    for (let i = 0; i < s.length; i++) {
        if (!map[s[i]]) {
            map[s[i]] = 1;
        } else {
            map[s[i]]++;
        }
    }

    let vowels = ['a', 'e', 'i', 'o', 'u'];
    let maxVowel = 0;
    let maxConsonant = 0;

    // find max freq
    for (let i = 0; i < s.length; i++) {
        if (vowels.includes(s[i])) {
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

// Example
console.log(maxFreqSum("leetcode"));