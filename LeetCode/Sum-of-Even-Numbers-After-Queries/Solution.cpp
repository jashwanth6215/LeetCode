1class Solution {
2public:
3    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
4        vector<int>v;
5        for(auto &i:queries)
6        {
7            int sum=0;
8            nums[i[1]]+=i[0];
9            for(auto &j:nums)
10            {
11                if(j%2==0)
12                {
13                    sum+=j;
14                }
15            }
16            v.push_back(sum);
17        }
18        return v;
19    }
20};