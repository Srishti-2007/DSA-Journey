function ispalidrom(s) {
  s= s.toLowerCase();
  let filterstring="";
//   let rev="";
  for(let i=0;i<s.length;i++){
    if(s[i].match(/[a-z0-9]/i)){
        filterstring=filterstring+s[i];   //in this we add right side
        // rev=s[i]+rev    in we add left side means performing rev operatuion
    }
  }
//   console.log(filterstring);

//   shortcut ket to reverse a string
// dfirstly convert to array then perform reverse operation and after, join it to back string
let rev=filterstring.split("").reverse().join("");
return rev===filterstring;
}
console.log(ispalidrom("A man, a plan,a canal: Panama"));



// just for understandinthe logic(biuilt-in function used in code)


//  if(s[i].match(/[a-z0-9]/i)){   for this yoy should also use it like this method
// normaly charCodeAt() give ascii value
// if((s[i].charCodeAt()>="a".charCodeAt() && s[i].charCodeAt()<="z".charCodeAt()) || (s[i].charCodeAt()>="0".charCodeAt() && s[i].charCodeAt()<="9".charCodeAt()))

// Without /i
// “Check karo character letter ya number hai, aur case matter nahi karta”
// "a".match(/[a-z]/)   // ✅ match
// "A".match(/[a-z]/)   // ❌ no match

// With /i
// "a".match(/[a-z]/i)  // ✅ match
// "A".match(/[a-z]/i)  // ✅ match