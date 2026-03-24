function check(s){
    let num="";
    let max=0;
    for(let i=0;i<s.length;i++){
        if(s[i]%2!=0){
            if(s[i]>max){
                max=s[i];
            }
        }
    }
    if(max>0){
        return num+max;
    }
    else{
        return num;
    }
}
console.log(check("35427"));