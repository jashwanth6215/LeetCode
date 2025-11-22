class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int Max=0,c=0;
        for(auto &i:nums)
        {
            if(i==1)
            {
                c++;
            }
            else
            {
                Max=max(c,Max);
                c=0;
            }
        }
        Max=max(c,Max);
        return Max;
    }
};