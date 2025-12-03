class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        if(colors.size()<2)
        {
            return 0;
        }
        int sum=neededTime[0],Min=neededTime[0];
        int ans=0;
        for(int i=1;i<colors.size();i++)
        {
            if(colors[i-1]==colors[i])
            {
                sum+=neededTime[i];
                Min=max(neededTime[i],Min);
            }
            else
            {
                ans+=sum-Min;
                sum=neededTime[i];
                Min=neededTime[i];
            }
        }
        ans+=(sum-Min);
        return ans;
    }
};