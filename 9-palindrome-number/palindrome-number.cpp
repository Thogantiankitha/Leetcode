class Solution {
public:
    bool isPalindrome(int x) {
             long long rev=0;
        long long original=x;
    
        while(x!=0){
            int last=x%10;
            x=x/10;
            rev=rev*10+last;

        }
        if(original==rev&&original>=0){
            return true;
        }
        else{
        return false;
        }
    return 0;
    }
};