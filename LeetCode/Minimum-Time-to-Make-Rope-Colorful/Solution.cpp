1class Solution {
2public:
3    int minCost(string colors, vector<int>& neededTime) {
4        if(colors.size()<2)
5        {
6            return 0;
7        }
8        int sum=neededTime[0],Min=neededTime[0];
9        int ans=0;
10        for(int i=1;i<colors.size();i++)
11        {
12            if(colors[i-1]==colors[i])
13            {
14                sum+=neededTime[i];
15                Min=max(neededTime[i],Min);
16            }
17            else
18            {
19                ans+=sum-Min;
20                sum=neededTime[i];
21                Min=neededTime[i];
22            }
23        }
24        ans+=(sum-Min);
25        return ans;
26    }
27};