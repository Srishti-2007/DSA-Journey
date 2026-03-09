    #include<iostream>
    using namespace std;
    bool isPalindrome(int n) {

        if(n < 0)
            return false;

        long long rev = 0;
        int copyofreal_n = n;

        while(n > 0){
            int lastdigit = n % 10;
            rev = (10 * rev) + lastdigit;
            n = n / 10;
        }

        if(copyofreal_n == rev){
            return true;
        }
        else{
            return false;
        }
    }