class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int small=0;
        for(int i=1;i<=k;i++)
        {
            small=(small*10+1)%k;
            if(small==0)
            {
                return i;
            }
        }
        return -1;
    }
};