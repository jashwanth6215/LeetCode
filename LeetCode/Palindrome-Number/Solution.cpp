class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        if(x==0)
        {
            return true;
        }
        int size=floor(log10(x))+1;
        int r=0,b=0,i=0;
        while(i!=size/2)
        {
            r=x%10;
            b=b*10+r;
            x/=10;
            i++;
        }
        if(size%2!=0)
        {
            return x/10==b;
        }
        return x==b;
    }
};