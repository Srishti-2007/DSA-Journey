function lengthOfLastWord(s) {
    // step 1: extra spaces hatao
    s = s.trim();

    // step 2: words me tod do
    let words = s.split(" ");

    // step 3: last word ki length return karo
    return words[words.length - 1].length;
}

// test
let s = "Hello World   ";
console.log(lengthOfLastWord(s));