1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int zc=0;
5        int ans=1;
6        for(auto &i:nums)
7        {
8            if(i==0)
9            {
10                zc++;
11                continue;
12            }
13            else
14            {
15                ans*=i;
16            }
17        }
18        if(zc==1)
19        {
20            for(auto &i:nums)
21            {
22                if(i==0)
23                {
24                    i=ans;
25                }
26                else
27                {
28                    i=0;
29                }
30            }
31        }
32        else if(zc>1)
33        {
34            for(auto &i:nums)
35            {
36                i=0;
37            }
38        }
39        else
40        {
41            for(auto &i:nums)
42            {
43                i=ans/i;
44            }
45        }
46        return nums;
47    }
48};