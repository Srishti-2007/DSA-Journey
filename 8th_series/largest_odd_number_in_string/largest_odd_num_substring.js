function check(s){
    let n=s.length-1;
    while(n>=0){
        if(Number(s[n])%2==1){
            return s.substring(0,n+1);
        }
        --n;
    }
    return "";
}
console.log(check("52"));