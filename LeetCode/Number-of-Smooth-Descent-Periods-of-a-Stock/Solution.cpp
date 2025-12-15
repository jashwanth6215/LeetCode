1class Solution {
2public:
3    long long getDescentPeriods(vector<int>& prices) {
4        int c=1;
5        int temp=1;
6        long long sum=0;
7        for(int i=1;i<prices.size();i++)
8        {
9            if(prices[i-1]-prices[i]==1)
10            {
11                c++;
12                temp++;
13            }
14            else
15            {
16                sum+=(c*1ll*(c+1))/2;
17                c=1;
18            }
19        }
20        sum+=(c*1ll*(c+1))/2;
21        return sum;
22    }
23};