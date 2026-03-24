// Method 1: Nested Loop
function method1(jewels, stones) {
    let count = 0;

    for (let i = 0; i < stones.length; i++) {
        for (let j = 0; j < jewels.length; j++) {
            if (stones[i] === jewels[j]) {
                count++;
                break;
            }
        }
    }

    return count;
}

// Method 2: includes()
function method2(jewels, stones) {
    let count = 0;

    for (let i = 0; i < stones.length; i++) {
        if (jewels.includes(stones[i])) {
            count++;
        }
    }

    return count;
}

// test input
let jewels = "aA";
let stones = "aAAbbbb";

// calling both methods
console.log("Nested Loop:", method1(jewels, stones));
console.log("Includes:", method2(jewels, stones));