function findWordsContaining(words, x) {
    let res = [];

    for (let i = 0; i < words.length; i++) {
        if (words[i].includes(x)) {
            res.push(i);
        }
    }

    return res;
}

// test input
let words = ["leet", "code"];
let x = "e";

console.log(findWordsContaining(words, x));