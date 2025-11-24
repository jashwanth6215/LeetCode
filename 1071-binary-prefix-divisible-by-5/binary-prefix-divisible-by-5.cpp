class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool>v;
        int c=0;
        for(auto &i:nums)
        {
            c=(c*2+i)%5;
            v.push_back(c==0);
        }
        return v;
    }
};