1class Solution {
2public:
3    int repeatedNTimes(vector<int>& nums) {
4        map<int,int>m;
5        for(auto &i:nums)
6        {
7            m[i]++;
8        }
9        for(auto &i:m)
10        {
11            if(i.second==nums.size()/2)
12            {
13                return i.first;
14            }
15        }
16        return -1;
17    }
18};