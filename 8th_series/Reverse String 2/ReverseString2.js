let s="abcdefg";
s=s.split("");
let k=2;
for(let x=0;x<s.length;x=x+(k*2)){
    let n=k;
    let mid=Math.floor(k/2);
    for(let i=0;i<mid;i++){
        let temp=s[x+i];
        s[x+i]=s[x+n-1-i];
        s[x+n-1-i]=temp;
    }
}
s=s.join("");
console.log(s);