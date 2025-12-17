1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int n=prices.size();
5        int Max=prices[n-1];
6        int r=0;
7        vector<int>v;
8        for(int i=n-2;i>=0;i--)
9        {
10            if(Max<prices[i])
11            {
12                Max=prices[i];
13            }
14            else
15            {
16                if(r<Max-prices[i])
17                {
18                    r=Max-prices[i];
19                }
20            }
21        }
22        return r;
23    }
24};