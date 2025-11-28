class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(auto i:nums)
        {
            m[i]++;
        }
        int c=0;
        for(auto &i:m)
        {
            if(k==0)
            {
                if(i.second>=2)
                {
                    c++;
                }
            }
            else
            {
                if(m.find(i.first+k)!=m.end())
                {
                    c++;
                }
            }
        }
        return c;
    }
};