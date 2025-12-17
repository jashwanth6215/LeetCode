1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int sum=0;
5        for(int i=1;i<prices.size();i++)
6        {
7            if(prices[i]>prices[i-1])
8            {
9                sum+=prices[i]-prices[i-1];
10            }
11        }
12        return sum;
13    }
14};