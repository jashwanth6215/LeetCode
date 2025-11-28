1class Solution {
2public:
3    int findPairs(vector<int>& nums, int k) {
4        unordered_map<int,int>m;
5        for(auto i:nums)
6        {
7            m[i]++;
8        }
9        int c=0;
10        for(auto &i:m)
11        {
12            if(k==0)
13            {
14                if(i.second>=2)
15                {
16                    c++;
17                }
18            }
19            else
20            {
21                if(m.find(i.first+k)!=m.end())
22                {
23                    c++;
24                }
25            }
26        }
27        return c;
28    }
29};