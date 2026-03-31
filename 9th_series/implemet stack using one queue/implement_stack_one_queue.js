let q1=[];
// push
function push(x){
    q1.push(x);
}
// pop
function pop(){
    let n=q1.length;
    for(let i=1;i<n;i++){
        q1.push(q1.shift());
    }
    return q1.shift();
}
// top
function top(){
    let n=q1.length;
    for(let i=1;i<n;i++){
        q1.push(q1.shift());
    }
    let ans= q1.shift();
    q1.push(ans);
    return ans;
}
// empty
function empty(){
    return q1.length===0;
}



push(10);
push(20);
push(30);
console.log(q1);
console.log("Top:", top());   // 30
console.log("after top() operation")
console.log(q1);
console.log("Pop:", pop());   // 30
console.log("after pop() operation")
console.log(q1);
console.log("Top:", top());   // 20
console.log("Empty:", empty()); // false